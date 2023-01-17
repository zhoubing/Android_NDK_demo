cmake_minimum_required(VERSION 3.4.1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1z -Wall")

#include_directories(C:\\opt\\Qt\\6.4.2\\android_arm64_v8a\\include)
include_directories(/Users/zhoubing/Downloads/Qt/include)

add_library( # Sets the name of the library.
             Test

             # Sets the library as a shared library.
             SHARED

             # Provides a relative path to your source file(s).
             src/main/cpp/test.cpp )

add_library(c++ SHARED IMPORTED)
set_target_properties( # Specifies the target library.
        c++
        # Specifies the parameter you want to define.
        PROPERTIES IMPORTED_LOCATION

        # Provides the path to the library you want to import.
        ${CMAKE_CURRENT_SOURCE_DIR}/libs/arm64-v8/libc++_shared.so)

add_library(qt6 SHARED IMPORTED)
set_target_properties( # Specifies the target library.
        qt6
        # Specifies the parameter you want to define.
        PROPERTIES IMPORTED_LOCATION

        # Provides the path to the library you want to import.
        ${CMAKE_CURRENT_SOURCE_DIR}/libs/arm64-v8/libQt6Core_arm64-v8a.so)

add_library(qt SHARED IMPORTED)
set_target_properties( # Specifies the target library.
        qt
        # Specifies the parameter you want to define.
        PROPERTIES IMPORTED_LOCATION

        # Provides the path to the library you want to import.
        ${CMAKE_CURRENT_SOURCE_DIR}/libs/arm64-v8/libqt-android_arm64-v8a.so)


find_library(log-lib log )

target_link_libraries( # Specifies the target library.
                       Test
                        qt
                        qt6
                        c++)
