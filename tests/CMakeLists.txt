cmake_minimum_required(VERSION 3.10.0)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(run-gtest test.cpp)
target_link_libraries(run-gtest ${GTEST_LIBRARIES} pthread)
