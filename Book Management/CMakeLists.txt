# set require version of cmake
cmake_minimum_required(VERSION 3.1)

#name of project
project (managerbook)

#include file
include_directories(include)

# set sub-directory for source
file(GLOB SOURCES "src/*.cpp" "include/*.cpp")

# make program with soure
add_executable(testBook ${SOURCES})