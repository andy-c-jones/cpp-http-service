mkdir Build && cd Build
cmake -DCMAKE_CXX_COMPILER=gcc -DCMAKE_BUILD_TYPE=Debug .. && make
ctest -VV
