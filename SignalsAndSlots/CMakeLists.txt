cmake_minimum_required(VERSION 3.16)

project(SignalsAndSlots LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

# find_package(Qt6 REQUIRED COMPONENTS Core)
# find_package(Qt6 REQUIRED COMPONENTS Core)

# target_sources(SignalsAndSlots
#   PRIVATE
#     reciever.h reciever.cpp
# )

add_executable(SignalsAndSlots
  main.cpp
  sender.h
  sender.cpp
  reciever.h
  reciever.cpp
)
target_link_libraries(SignalsAndSlots Qt${QT_VERSION_MAJOR}::Core)
#target_link_libraries(SignalsAndSlots PRIVATE Qt6::Core)
#target_link_libraries(SignalsAndSlots PRIVATE Qt6::Core)

include(GNUInstallDirs)
install(TARGETS SignalsAndSlots
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
