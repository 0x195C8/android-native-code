cmake_minimum_required(VERSION 3.0.0)
project(android-native-code VERSION 0.1.0)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -frtti -Wall -O0 -g -ggdb")

include(CTest)
enable_testing()

add_executable(android-native-code main.cpp)

find_library(
    log-lib
    log
)

target_link_libraries(
    android-native-code
    ${log-lib}
)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
