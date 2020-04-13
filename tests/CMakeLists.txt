cmake_minimum_required(VERSION 3.10.0)

find_package(GTest REQUIRED)

add_executable(run-gtest test.cpp)
target_include_directories(run-gtest PRIVATE ${APP_INCLUDES} PRIVATE ${GTEST_INCLUDE_DIRS})

target_link_libraries(run-gtest ${GTEST_LIBRARIES} pthread)
