# CMakeList.txt: проект CMake для CreateLibrary; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
add_library(HeaderLib INTERFACE Laughter.ipp)

set_target_properties(HeaderLib PROPERTIES PUBLIC_HEADER Laughter.ipp)

install(TARGETS HeaderLib
		PUBLIC_HEADER
		DESTINATION ${CMAKE_SOURCE_DIR}/HeaderLib/include)

add_library(DynamicLib SHARED Laughter.hpp Laughter.cpp)

set_target_properties(DynamicLib PROPERTIES PUBLIC_HEADER Laughter.hpp)


install(TARGETS DynamicLib
		PUBLIC_HEADER DESTINATION ${CMAKE_SOURCE_DIR}/DynamicLib/include
		RUNTIME DESTINATION ${CMAKE_SOURCE_DIR}/DynamicLib/lib)

add_definitions(-DBUILD_DLL)

add_library(StaticLib STATIC Laughter.cpp Laughter.hpp)

set_target_properties(StaticLib PROPERTIES PUBLIC_HEADER Laughter.hpp)

install(TARGETS StaticLib
		PUBLIC_HEADER
		DESTINATION ${CMAKE_SOURCE_DIR}/StaticLib/include
		ARCHIVE DESTINATION ${CMAKE_SOURCE_DIR}/StaticLib/lib)

