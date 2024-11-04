cmake_minimum_required(VERSION 3.5)

project(harj1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(harj1 main.cpp
    myfunctions.h
    myfunctions.cpp)

include(GNUInstallDirs)
install(TARGETS harj1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
