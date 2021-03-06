cmake_minimum_required(VERSION 3.2)
project(TKOM)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

find_package(FLEX)

FLEX_TARGET(MyScanner lexer.l  ${CMAKE_CURRENT_BINARY_DIR}/lexer.cpp COMPILE_FLAGS -+)

set(INTERPRETER_SOURCE_FILES main.cc TokenType.h)

include_directories(${CMAKE_CURRENT_BINARY_DIR})
include_directories(${Project_SOURCE_DIR})
add_executable(Interpreter
        ${INTERPRETER_SOURCE_FILES}
        ${FLEX_MyScanner_OUTPUTS}
)

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Link runTests with what we want to test and the GTest and pthread library
set(TEST_FILES Tests/tests.cc TokenType.h)
add_executable(runTests
        ${TEST_FILES}
        ${FLEX_MyScanner_OUTPUTS}
        )

target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)