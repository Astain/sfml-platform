cmake_minimum_required(VERSION 3.1 FATAL_ERROR)
project("sfml-platform")

set(SOURCE_FILES
        src/main.cpp
)

set(BUILD_SHARED_LIBS FALSE)
add_subdirectory(libs/sfml)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})

target_link_libraries(${PROJECT_NAME} sfml-graphics)
target_link_libraries(${PROJECT_NAME} sfml-audio)