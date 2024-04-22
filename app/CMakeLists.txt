cmake_minimum_required(VERSION 3.5)

project(MainWindow VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

SET(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

set(FOLDER "${CMAKE_CURRENT_SOURCE_DIR}/..")

set(LIB_DIR "${FOLDER}/Qt/msvc2019_64/lib")

set(QT_DIR "${LIB_DIR}/cmake/Qt6")
set(Qt6_DIR "${QT_DIR}")

find_package(Qt6 REQUIRED COMPONENTS Core)
find_package(Qt6 REQUIRED COMPONENTS Widgets)
find_package(Qt6 REQUIRED COMPONENTS WebEngineWidgets)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
)

qt_add_executable(MainWindow
    MANUAL_FINALIZATION
    ${PROJECT_SOURCES}
    images.qrc
)

target_link_libraries(MainWindow PRIVATE Qt6::Widgets
                      Qt6::WebEngineWidgets
                      #BIN
)


set_target_properties(MainWindow PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS MainWindow
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${LIB_DIR}
    RUNTIME DESTINATION "${LIB_DIR}/../bin"
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(MainWindow)
endif()
