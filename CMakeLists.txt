cmake_minimum_required(VERSION 3.10)
set(CMAKE_C_COMPILER "/usr/bin/gcc")
set(CMAKE_CXX_COMPILER "/usr/bin/g++")
project(eliminate_unset_bits)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Добавляем Google Test
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
FetchContent_MakeAvailable(googletest)

# Основная программа
add_executable(program main.cpp polindrom.cpp)

# Тесты
add_executable(tests tests.cpp polindrom.cpp)
target_link_libraries(tests gtest_main)

include(GoogleTest)
gtest_discover_tests(tests)