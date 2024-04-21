cmake_minimum_required(VERSION 3.5)

project(MainWindow VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

SET(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

#set(LIBRARY_OUTPUT_PATH "${CMAKE_BINARY_DIR}")
#set(EXECUTABLE_OUTPUT_PATH "${CMAKE_BINARY_DIR}")

set(FOLDER "${CMAKE_SOURCE_DIR}/..")
set(LIB_DIR "FOLDER/Qt/msvc2019_64/lib")
set(BIN_DIR "FOLDER/Qt/msvc2019_64/bin")
set(PATH "FOLDER/Qt/msvc2019_64/bin")


set(QT_CMAKE_DIR "${CMAKE_SOURCE_DIR}/../Qt/msvc2019_64/lib/cmake")
set(CMAKE_PREFIX_PATH "${CMAKE_SOURCE_DIR}/../Qt/msvc2019_64")

set(CMAKE_PROJECT_INCLUDE_BEFORE "FOLDER/app/build/Desktop_Qt_6_7_0_MSVC2019_64bit-Debug/.qtc/package-manager/auto-setup.cmake")
set(QT_DIR "LIB_DIR/cmake/Qt6")
set(QT_QMAKE_EXECUTABLE "LIB_DIR/../bin/qmake.exe")
set(Qt6CoreTools_DIR "LIB_DIR/cmake/Qt6CoreTools")
set(Qt6Core_DIR "LIB_DIR/cmake/QtCore")
set(Qt6WebEngineWidgets_DIR "LIB_DIR/cmake/Qt6WebEngineWidgets")
set(Qt6Widgets_DIR "LIB_DIR/cmake/Qt6Widgets")
set(Qt6_DIR "LIB_DIR/cmake/Qt6")



#find_package(Qt6 COMPONENTS Core Widgets WebEngineWidgets REQUIRED PATHS ${QT_CMAKE_DIR})
#find_package(Qt6 COMPONENTS Core REQUIRED PATHS ${QT_CMAKE_DIR})
#find_package(Qt6 COMPONENTS Widgets REQUIRED PATHS ${QT_CMAKE_DIR})
find_package(Qt6 REQUIRED COMPONENTS Core)
find_package(Qt6 REQUIRED COMPONENTS Widgets)
#find_package(Qt6 REQUIRED COMPONENTS WebView)
find_package(Qt6 REQUIRED COMPONENTS WebEngineWidgets)
#include("${CMAKE_SOURCE_DIR}/../Qt/msvc2019_64/lib/cmake/Qt6WebEngineWidgets/Qt6WebEngineWidgetsConfig.cmake")
#find_package(Qt6 REQUIRED COMPONENTS WebEngineWidgets)


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
    
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET MainWindow APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
if(ANDROID)
    add_library(MainWindow SHARED
        ${PROJECT_SOURCES}
    )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
else()
    #add_executable(MainWindow
     #   ${PROJECT_SOURCES}
    #)
endif()



set(CMAKE_C_ARCHIVE_CREATE ""${CMAKE_CURRENT_SOURCE_DIR}/platforms"")
set(CMAKE_C_ARCHIVE_FINISH ""${CMAKE_CURRENT_SOURCE_DIR}/platforms"")
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/platforms")


target_link_libraries(MainWindow PRIVATE Qt6::Widgets
                      Qt6::WebEngineWidgets
                      #BIN
)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.

#if(${QT_VERSION} VERSION_LESS 6.1.0)
#  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.MainWindow)
#endif()
set_target_properties(MainWindow PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)


#set(CMAKE_INSTALL_LIBDIR ${LIB_DIR})
include(GNUInstallDirs)
install(TARGETS MainWindow
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${LIB_DIR}
    RUNTIME DESTINATION "${CMAKE_CURRENT_SOURCE_DIR}/platforms"
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(MainWindow)
endif()
