cmake_minimum_required(VERSION 3.4.1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1z -Wall")

include_directories(C:\\Qt\\6.4.2\\android_arm64_v8a\\include)
add_library( # Sets the name of the library.
             Test

             # Sets the library as a shared library.
             SHARED

             # Provides a relative path to your source file(s).
             src/main/cpp/test.cpp )


find_library(log-lib log )

target_link_libraries( # Specifies the target library.
                       Test)
