
cmake_minimum_required(VERSION 3.10)
project(cpp_learning_journal)

set(CMAKE_CXX_STANDARD 20)

# Helper function to add all executables from subfolders
function(add_example_subdir dir)
    file(GLOB sources "${dir}/*.cpp")
    foreach(src ${sources})
        get_filename_component(name ${src} NAME_WE)
        add_executable("${dir}_${name}" ${src})
    endforeach()
endfunction()

add_example_subdir(basics)
# add_example_subdir(modern_cpp)
# add_example_subdir(templates)
