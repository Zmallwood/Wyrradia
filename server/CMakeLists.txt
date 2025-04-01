cmake_minimum_required (VERSION 3.5)
project (WyrradiaLANGUAGES CXX)
set (CMAKE_CXX_STANDARD 20)

IF (WIN32)
    set(CMAKE_CXX_FLAGS "-static-libstdc++ -static-libgcc -Wl,-Bstatic,--whole-archive -lwinpthread -Wl,-Bdynamic,--no-whole-archive")
ENDIF()

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

file(GLOB_RECURSE SRC_FILES ${PROJECT_SOURCE_DIR}/src/*.cpp)
add_compile_definitions(SDL_MAIN_HANDLED)
#add_compile_definitions(GLM_ENABLE_EXPERIMENTAL)
add_executable(Wyrradia ${SRC_FILES})

IF (WIN32)
  target_link_libraries(Wyrradia
    )
ELSE()
  target_link_libraries(Wyrradia
    )
ENDIF()

target_include_directories(Wyrradia PUBLIC "src" "external")

target_precompile_headers(Wyrradia
    PRIVATE
        src/StdAfx/StdAfx.hpp
)
