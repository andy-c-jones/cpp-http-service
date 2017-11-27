cmake_minimum_required(VERSION 3.8)
project(cmdlineprog)

set(CMAKE_CXX_STANDARD 11)

file(GLOB SOURCE_FILES
        "*.h"
        "*.cpp"
)

include(CTest)
enable_testing()

add_executable(cmdlineprog ${SOURCE_FILES})