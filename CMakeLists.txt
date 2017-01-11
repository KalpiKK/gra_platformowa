cmake_minimum_required(VERSION 3.5)
project(projekt)


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp kot.cpp kot.h bloki.cpp bloki.h punkty.cpp punkty.h Menu.cpp Menu.h Ryba.cpp Ryba.h bum.cpp bum.h)
add_executable(projekt ${SOURCE_FILES})


set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})
find_package(SFML 2 REQUIRED system window graphics)
if(SFML_FOUND)
    include_directories($(SFML_INCLUDE_DIR))
    target_link_libraries("projekt" ${SFML_LIBRARIES})
endif()

