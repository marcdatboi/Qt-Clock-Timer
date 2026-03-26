



cmake_minimum_required(VERSION 3.16)
project(testing)

set(SOURCES
    src/main.cpp
    src/MainWindow.cpp
    src/Clock.cpp
        src/CustomDisplayWidget.cpp
        src/Stopwatch.cpp
)

set(HEADERS
    include/MainWindow.hpp
    include/Clock.hpp
        include/CustomDisplayWidget.hpp
        include/Stopwatch.hpp
)

set(CMAKE_AUTOMOC ON)
set(CMAKE_PREFIX_PATH "C:/DevFolder/tools/Frameworks/Qt/6.10.2/mingw_64/bin")
find_package(Qt6 COMPONENTS REQUIRED Widgets Gui)

add_executable(testing
    ${SOURCES}
    ${HEADERS}
)

target_include_directories(testing PRIVATE include)
target_link_libraries(testing PRIVATE
    Qt6::Widgets
    Qt6::Gui
)