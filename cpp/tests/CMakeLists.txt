cmake_minimum_required(VERSION 3.1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project(test)

include_directories(/usr/local/include)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE ${CMAKE_BINARY_DIR}/../bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_BINARY_DIR}/../bin)

find_library(A_SIMPLE_PROJECT_LIB aSimpleProject HINTS /usr/local/lib/) # update here
find_library(MY_TESTING_LIB myTesting HINTS /usr/local/lib/)

add_executable(aSimpleProject src/aSimpleProject.cpp)

target_link_libraries(aSimpleProject PUBLIC ${A_SIMPLE_PROJECT_LIB}) # update here
target_link_libraries(aSimpleProject PUBLIC ${MY_TESTING_LIB})