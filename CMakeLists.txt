cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

project(GoogleTest-Demo)

enable_language(C CXX)

if(CMAKE_CXX_COMPILER_ID MATCHES GNU)
    set(CMAKE_CXX_FLAGS         "-Wall -Wno-unknown-pragmas -Wno-sign-compare -Woverloaded-virtual -Wwrite-strings -Wno-unused")
    set(CMAKE_CXX_FLAGS_DEBUG   "-O0 -g3")
    set(CMAKE_CXX_FLAGS_RELEASE "-O3")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fprofile-arcs -ftest-coverage --std=c++11")
endif()

include_directories(
    ${PROJECT_SOURCE_DIR}/src
    )

add_library(
    CTCI
    src/CTCI/Chapter-1/Q1.cpp
    src/CTCI/Chapter-1/Q2.cpp
    src/CTCI/Chapter-1/Q3.cpp
    src/CTCI/Chapter-1/Q4.cpp
    src/CTCI/Chapter-1/Q5.cpp
    src/CTCI/Chapter-1/Q6.cpp
    src/CTCI/Chapter-1/Q7.cpp
    src/CTCI/Chapter-1/Q8.cpp
    src/CTCI/Chapter-5/Q1.cpp
    src/CTCI/Chapter-5/Q5.cpp
    src/CTCI/Chapter-5/Q6.cpp
    src/CTCI/Moderate/Q1.cpp
    src/CTCI/Hard/Q1.cpp
    )

set(GOOGLETEST_ROOT external/googletest/googletest CACHE STRING "Google Test Root")

include_directories(
    ${PROJECT_SOURCE_DIR}/${GOOGLETEST_ROOT}
    ${PROJECT_SOURCE_DIR}/${GOOGLETEST_ROOT}/include
    )

set(GOOGLETEST_SOURCES
    ${PROJECT_SOURCE_DIR}/${GOOGLETEST_ROOT}/src/gtest-all.cc
    ${PROJECT_SOURCE_DIR}/${GOOGLETEST_ROOT}/src/gtest_main.cc
    )

foreach(_source ${GOOGLETEST_SOURCES})
    set_source_files_properties(${_source} PROPERTIES GENERATED 1)
endforeach()

add_library(googletest ${GOOGLETEST_SOURCES})

add_executable(
    unit_tests
    test/main.cpp
    test/CTCI/Chapter-1/test_Q1.cpp
    test/CTCI/Chapter-1/test_Q2.cpp
    test/CTCI/Chapter-1/test_Q3.cpp
    test/CTCI/Chapter-1/test_Q4.cpp
    test/CTCI/Chapter-1/test_Q5.cpp
    test/CTCI/Chapter-1/test_Q6.cpp
    test/CTCI/Chapter-1/test_Q7.cpp
    test/CTCI/Chapter-1/test_Q8.cpp
    test/CTCI/Chapter-5/test_Q1.cpp
    test/CTCI/Chapter-5/test_Q5.cpp
    test/CTCI/Chapter-5/test_Q6.cpp
    test/CTCI/Moderate/test_Q1.cpp
    test/CTCI/Hard/test_Q1.cpp
    )

add_dependencies(unit_tests googletest)

target_link_libraries(
    unit_tests
    googletest
    CTCI
    pthread
    )

include(CTest)
enable_testing()

add_test(unit ${PROJECT_BINARY_DIR}/unit_tests)
