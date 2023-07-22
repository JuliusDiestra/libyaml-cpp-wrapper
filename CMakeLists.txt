cmake_minimum_required(VERSION 3.10.2)

project(yaml_cpp_parser LANGUAGES CXX  C)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# libyaml location: /usr/local/lib

add_library(${PROJECT_NAME} SHARED
    src/yaml_parser.cpp
)

target_include_directories(${PROJECT_NAME}
    PUBLIC
        include/
)

target_link_libraries(${PROJECT_NAME}
    /usr/local/lib/libyaml.a
)

include(CTest)
if (BUILD_TESTING)
    enable_testing()
    add_subdirectory(test)
endif()

