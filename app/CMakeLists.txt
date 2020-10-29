cmake_minimum_required(VERSION 3.18.2)

set(CMAKE_CXX_STANDARD 17)

add_compile_options(
    -std=c++17
    -Wall
    -Wextra
    -Werror
    -Wpedantic
)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets Core Gui Multimedia DBus MultimediaWidgets REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets Core Gui Multimedia DBus MultimediaWidgets REQUIRED)

add_executable(utext main.cpp)

add_subdirectory(src)

include_directories(src)

target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE Qt${QT_VERSION_MAJOR}::Core
        Qt${QT_VERSION_MAJOR}::Widgets
        Qt${QT_VERSION_MAJOR}::Gui
        Qt${QT_VERSION_MAJOR}::Multimedia
        Qt${QT_VERSION_MAJOR}::DBus
        liba
)

set_target_properties(utext PROPERTIES RUNTIME_OUTPUT_DIRECTORY ../..)