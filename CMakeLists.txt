cmake_minimum_required(VERSION 3.10)
project(FizzBuzzGTest)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/install/")
include(${CMAKE_SOURCE_DIR}/DownloadProject/DownloadProject.cmake)

download_project(
        PROJ                googletest
        GIT_REPOSITORY      https://github.com/google/googletest.git
        GIT_TAG             master
        UPDATE_DISCONNECTED 1
)

add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BINARY_DIR} EXCLUDE_FROM_ALL)

#set(test_SRCS ADD ALL TEST SOURCE FILES HERE)
add_executable(FizzBuzzGTest test.cpp FizzBuzzTest.cpp FizzBuzz.cpp FizzBuzz.h)
# add_executable(runUnitTests gtest.cpp ${test_SRCS})
target_link_libraries(FizzBuzzGTest gtest gmock)
