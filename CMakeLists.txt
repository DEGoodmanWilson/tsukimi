cmake_minimum_required(VERSION 3.5)
set(PROJECT_NAME tsukimi)

project(${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 14)

include(conanbuildinfo.cmake)
CONAN_BASIC_SETUP()

set(SOURCE_FILES main.cpp logger.cpp logger.hpp app.cpp app.hpp controllers/controller.hpp)
set(CONTROLLERS
        controllers/hello_world.hpp
        )
add_executable(${PROJECT_NAME} ${SOURCE_FILES} ${CONTROLLERS})
target_link_libraries(${PROJECT_NAME} ${CONAN_LIBS})

# Tests
add_subdirectory(tests)