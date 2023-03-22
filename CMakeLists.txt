
cmake_minimum_required(VERSION 3.18)
cmake_policy(SET CMP0048 NEW)

project(bank VERSION 1.0)

set(CMAKE_CXX_STANDARD 20)

Include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.0.1 # or a later release
)

FetchContent_MakeAvailable(Catch2)

add_executable(test_account test_account.cpp account.cpp)
target_link_libraries(test_account PRIVATE Catch2::Catch2WithMain)

