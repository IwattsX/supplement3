cmake_minimum_required(VERSION 3.14)
project(my_project)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include directory for header files
include_directories(${CMAKE_SOURCE_DIR}/include)

# Add your library
add_library(temp_even src/source.c)

# GoogleTest setup using FetchContent
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# Prevent Windows-specific overrides
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Enable testing
enable_testing()

# Add test executables
add_executable(temp_test tests/test_temp.cc)
target_link_libraries(temp_test temp_even GTest::gtest_main)

add_executable(even_test tests/test_even.cc)
target_link_libraries(even_test temp_even GTest::gtest_main)

# Use gtest_discover_tests for each test executable
include(GoogleTest)
gtest_discover_tests(temp_test)
gtest_discover_tests(even_test)
