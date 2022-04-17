cmake_minimum_required(VERSION 3.0)
project(hello)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_PREFIX_PATH D:/Prosoftware/sdks/qt-sdk/5.9/mingw53_32) #这里需要填入自己安装的路径


find_package(Qt5Widgets)
find_package( Qt5Core)
find_package( Qt5Gui)

set(UI_FILES)

set(RC_FILES)

set(QRC_FILES)

set(SOURCE_FILES main.cpp)

add_executable(hello WIN32 ${RC_FILES}${SOURCE_FILES}${UI_FILES}${QRC_FILES})

target_link_libraries(hello Qt5::Widgets)

qt5_use_modules(hello Core Widgets Gui)

