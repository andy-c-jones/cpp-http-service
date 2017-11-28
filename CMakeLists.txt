cmake_minimum_required(VERSION 3.8)
project(cmdlineprog)

set(CMAKE_CXX_STANDARD 14)

#####################
## Get gtest       ##
#####################

# download and  build gtest and gmock
if (CMAKE_VERSION VERSION_LESS 3.2)
    set(UPDATE_DISCONNECTED_IF_AVAILABLE "")
else ()
    set(UPDATE_DISCONNECTED_IF_AVAILABLE "UPDATE_DISCONNECTED 1")
endif ()

include(${CMAKE_CURRENT_SOURCE_DIR}/cmake/DownloadProject.cmake)
download_project(PROJ googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG master
        ${UPDATE_DISCONNECTED_IF_AVAILABLE})

# Prevent GoogleTest from overriding our compiler/linker options
# when building with Visual Studio
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BINARY_DIR})

include(CTest)
enable_testing()

####################
## Unit tests     ##
####################

include_directories(${PROJECT_SOURCE_DIR}/src/include)

file(GLOB TEST_SRC_FILES
        ${PROJECT_SOURCE_DIR}/test/*.cpp
        unitTestRunner.cpp)

# Make the tests available to run through ctest
# Do "ctest -VV" in the build directory
add_test(NAME all_tests COMMAND unitTests)

file(GLOB SOURCE_FILES
        "${PROJECT_SOURCE_DIR}/src/service/*.h"
        "${PROJECT_SOURCE_DIR}/src/service/*.cpp"
        "ThirdParty/crow/crow_all.h")

file(GLOB APP_MAIN "${PROJECT_SOURCE_DIR}/src/main.cpp")

add_executable(unitTests ${TEST_SRC_FILES} ${SOURCE_FILES})
add_executable(cmdlineprog ${APP_MAIN} ${SOURCE_FILES})

find_package(Boost COMPONENTS system filesystem REQUIRED)

target_link_libraries(unitTests
        ${Boost_FILESYSTEM_LIBRARY}
        ${Boost_SYSTEM_LIBRARY}
        gtest
        gmock)

target_link_libraries(cmdlineprog
        ${Boost_FILESYSTEM_LIBRARY}
        ${Boost_SYSTEM_LIBRARY})

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)
target_link_libraries(cmdlineprog Threads::Threads)
