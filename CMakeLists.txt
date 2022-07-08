cmake_minimum_required(VERSION 3.5)

project(simple_qtCalculator VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set( CMAKE_PREFIX_PATH ${CMAKE_PREFIX_PATH} $ENV{QTDIR} )

if(NOT CMAKE_PREFIX_PATH)
	MESSAGE(FATAL_ERROR "Please, set the QTDIR env variable to locate your local Qt instalation")
endif()

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        main.cpp
        controller.cpp
        controller.h
        calculator.cpp
        calculator.h
        calculator.ui
)

add_executable(simple_qtCalculator ${PROJECT_SOURCES})

target_compile_options(simple_qtCalculator PRIVATE -Wall -Wextra -Wpedantic -Werror)

target_link_libraries(simple_qtCalculator PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

#qt_finalize_executable(simple_qtCalculator)
