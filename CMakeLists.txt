# cmake_minimum_required(VERSION 3.21)
# # project(conan_project LANGUAGES CXX)

# set(CMAKE_CXX_STANDARD 20)
# set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# # Conan toolchain integration is automatic if CMakeToolchain is used
# find_package(fmt REQUIRED)

# add_executable(conan_project src/main.cpp)
# target_include_directories(conan_project PRIVATE include)
# target_link_libraries(conan_project PRIVATE fmt::fmt)




cmake_minimum_required(VERSION 3.21)
project(cpp_practice)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Add all topic folders here
add_subdirectory(topics/enum)
add_subdirectory(topics/ostream)
# add_subdirectory(topics/threading)