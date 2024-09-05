cmake_minimum_required(VERSION 3.15 FATAL_ERROR)
project(lua-openxlsx)

set(CMAKE_OSX_ARCHITECTURES "x86_64;arm64")

set(CMAKE_CXX_VISIBILITY_PRESET hidden)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_subdirectory(pugixml)
add_subdirectory(lua)

set(SRC
    src/lua_pugixml.h
    src/lua_pugixml.cpp
    olua/olua.h
    olua/olua.c
)
add_library(luapugixml MODULE ${SRC})
set_target_properties(luapugixml PROPERTIES 
    PREFIX ""
    OUTPUT_NAME pugixml
)
target_include_directories(luapugixml
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/olua
    ${CMAKE_CURRENT_SOURCE_DIR}/lua
)
if(APPLE)
    target_link_options(luapugixml PUBLIC -bundle -undefined dynamic_lookup)
elseif(WIN32)
    target_link_libraries(luapugixml liblua)
endif()

target_link_libraries(luapugixml pugixml-static)