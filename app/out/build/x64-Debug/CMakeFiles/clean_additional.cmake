# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\MainWindow_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\MainWindow_autogen.dir\\ParseCache.txt"
  "MainWindow_autogen"
  "platforms\\CMakeFiles\\Cored_autogen.dir\\AutogenUsed.txt"
  "platforms\\CMakeFiles\\Cored_autogen.dir\\ParseCache.txt"
  "platforms\\CMakeFiles\\Guid_autogen.dir\\AutogenUsed.txt"
  "platforms\\CMakeFiles\\Guid_autogen.dir\\ParseCache.txt"
  "platforms\\CMakeFiles\\WebEngineWidgetsd_autogen.dir\\AutogenUsed.txt"
  "platforms\\CMakeFiles\\WebEngineWidgetsd_autogen.dir\\ParseCache.txt"
  "platforms\\CMakeFiles\\Widgetsd_autogen.dir\\AutogenUsed.txt"
  "platforms\\CMakeFiles\\Widgetsd_autogen.dir\\ParseCache.txt"
  "platforms\\Cored_autogen"
  "platforms\\Guid_autogen"
  "platforms\\WebEngineWidgetsd_autogen"
  "platforms\\Widgetsd_autogen"
  )
endif()
