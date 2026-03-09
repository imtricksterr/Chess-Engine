cmake_minimum_required(VERSION 3.10)
project(Chess-Engine)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(engine
    src/main.cpp
    src/engine/search.cpp    
    src/engine/evaluate.cpp sre
)