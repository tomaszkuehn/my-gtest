# my-gtest
Google test demo.

Start with installing Google test on Linux:

sudo apt-get install libgtest-dev

Then optionally install cmake

sudo apt-get install cmake

Then compile Google test

cd /usr/src/gtest
sudo cmake CMakeLists.txt
sudo make
sudo cp *.a /usr/lib

Clone this repository. Enter the repository folder.

## To build the demo project to run application:

1. Create build folder: mkdir build
2. cd build
3. cmake ..
4. make
5. ./my-test-app

## To build tests

1. Stay in build folder
2. Remove everything from build folder
3. cmake -DGTEST=ON ..
4. make
5. ./tests/run-gtest

