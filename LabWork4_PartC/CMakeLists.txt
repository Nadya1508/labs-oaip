cmake_minimum_required(VERSION 3.14)
project(LabWork4_PartC)

set(CMAKE_CXX_STANDARD 11)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.12.1
)

FetchContent_MakeAvailable(googletest)

add_executable(main main.cpp array_utils.cpp)
add_executable(tests tests.cpp array_utils.cpp)
target_link_libraries(tests gtest_main)
