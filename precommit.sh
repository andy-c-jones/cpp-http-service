mkdir Build
cd Build
rm -rf *
cmake -DCMAKE_CXX_COMPILER=g++ -DCMAKE_BUILD_TYPE=Debug .. && make && ctest -VV
