## Specify the version of "CMake" ##
cmake_minimum_required(VERSION 3.0)

## Specify the project name and Select "C" or "C++" ##
project(sample1 CXX)

## Specify the executable file name and the source file name ##
add_executable(sample1 sample1.cpp)

## Add the subdirectory ##
#add_subdirectory(src)

## Add the library to the project ##
#target_link_libraries(ising solver)

## Specify the build type ## 
#set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_BUILD_TYPE Release)
#set(CMAKE_BUILD_TYPE RelWithDebInfo)
#set(CMAKE_BUILD_TYPE MinSizeRel)

## Specify the compiler (*path) ##
set(CMAKE_CXX_COMPILR /usr/bin/g++)
#set(CMAKE_CXX_COMPILR /usr/bin/clang++)

## Specify options for the compiler ##
set(CMAKE_CXX_FLAGS "-std=c++14 -pedantic -Wall -Wextra -Wformat=2 -Wcast-qual -Wwrite-strings -Wfloat-equal -Wpointer-arith -Winit-self -Wredundant-decls")
# set(CMAKE_CXX_FLAGS "-std=c++14 -Wall -Wextra -pedantic -Wcast-align -Wcast-qual -Wdisabled-optimization -Wendif-labels -Wfloat-equal -Winit-self -Winline -Wlogical-op -Wmissing-include-dirs -Wnon-virtual-dtor -Wold-style-cast -Woverloaded-virtual -Wpacked -Wpointer-arith -Wredundant-decls -Wsign-promo -Wswitch-default -Wswitch-enum -Wunsafe-loop-optimizations -Wvariadic-macros -Wwrite-strings -Wno-unknown-warning-option")
set(CMAKE_CXX_FLAGS_DEBUG "-g3 -O0 -pg")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -DNDEBUG -march=native")
set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "-g3 -Og -pg")
set(CMAKE_CXX_FLAGS_MINSIZEREL "-Os -DNDEBUG -march=native")

## Search for matching files and store them to the variable ##
#file(GLOB KUDPC "kupdc/*")
## Copy files, directories, and symlinks to a directory ##
#file(COPY ${KUDPC} DESTINATION ./)
