

cmake_minimum_required(VERSION 3.10.2)

include(addTest.cmake)

MarsvinAddTest(
    NAME test_file_unique_ptr
    SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/test_file_unique_ptr.cpp
    INCLUDE_DIR ../include
    LINK_LIBRARIES yaml_cpp_parser
)

MarsvinAddTest(
    NAME test_read_yaml
    SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/test_read_yaml.cpp
    INCLUDE_DIR ../include
    LINK_LIBRARIES yaml_cpp_parser
)

