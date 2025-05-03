cmake_minimum_required(VERSION 3.4.1)
project(PureCppTurboModuleLibrary)

set (CMAKE_VERBOSE_MAKEFILE ON)

add_library(
    react-native-pure-cpp-turbo-module-library
    STATIC
    ../cpp/PureCppImpl.cpp
)

# Specifies a path to native header files.
target_include_directories(
    react-native-pure-cpp-turbo-module-library
    PUBLIC
    ../cpp
)

target_link_libraries(
    react-native-pure-cpp-turbo-module-library
    jsi
    reactnative
    react_codegen_PureCppTurboModuleLibrarySpec
)
