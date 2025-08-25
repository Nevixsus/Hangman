cmake_minimum_required(VERSION 3.16)
project(wisielec LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

# Try Qt6 first, then Qt5
find_package(Qt6 COMPONENTS Widgets REQUIRED QUIET)
if(NOT Qt6_FOUND)
  find_package(Qt5 COMPONENTS Widgets REQUIRED)
endif()

set(SOURCES
  Gra.cpp
  Gracz.cpp
  MainWindow.cpp
  Slowo.cpp
  Wisielec.cpp
  WprowadzHasloDialog.cpp
  main.cpp
)

set(HEADERS
  Gra.h
  Gracz.h
  MainWindow.h
  Slowo.h
  Wisielec.h
  WprowadzHasloDialog.h
  ios.h
)

set(FORMS

)

set(RESOURCES
  resources.qrc
)

add_executable(wisielec
  ${SOURCES}
  ${HEADERS}
  ${FORMS}
  ${RESOURCES}
  MainWindow.ui

  WprowadzHasloDialog.ui
)

if(Qt6_FOUND)
  target_link_libraries(wisielec PRIVATE Qt6::Widgets)
else()
  target_link_libraries(wisielec PRIVATE Qt5::Widgets)
endif()

# Put runtime next to sources when building locally
set_target_properties(wisielec PROPERTIES
  RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin"
)

# Copy images next to the binary for non-resource usage (if code loads files from disk)
add_custom_command(TARGET wisielec POST_BUILD
  COMMAND ${CMAKE_COMMAND} -E copy_directory
          "${CMAKE_SOURCE_DIR}/images"
          "$<TARGET_FILE_DIR:wisielec>/images")
