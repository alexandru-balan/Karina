cmake_minimum_required(VERSION 3.14)
project(Karina)

set(CMAKE_CXX_STANDARD 17)

find_package (PkgConfig)
pkg_check_modules(GTKMM gtkmm-3.0)

include_directories(${GTKMM_INCLUDE_DIRS})
link_directories(${GTKMM_LIBRARY_DIRS})

set(SOURCE_FILES main.cpp mainWindow.h WindowWidgets/headerBar.h WindowWidgets/HeaderBarWidgets/menuButton.h)
add_executable(${CMAKE_PROJECT_NAME} ${SOURCE_FILES} WindowWidgets/headerBar.h)
target_link_libraries(${CMAKE_PROJECT_NAME} ${GTKMM_LIBRARIES})