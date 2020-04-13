cmake_minimum_required(VERSION 3.10.0)
project(my-gtest VERSION 0.2)

# *** VARIABLES ***

# targets
set(APP_TARGET my-test-app)

# includes
set(APP_INCLUDES ${PROJECT_SOURCE_DIR}/inc)

# sources
file(GLOB_RECURSE APP_SRCS src/*.cpp)

option(GTEST "Gtest")
if(${GTEST})
    add_subdirectory(tests)
else()    
    add_executable(${APP_TARGET} ${APP_SRCS})
    target_include_directories(${APP_TARGET} PRIVATE ${APP_INCLUDES})
endif()
