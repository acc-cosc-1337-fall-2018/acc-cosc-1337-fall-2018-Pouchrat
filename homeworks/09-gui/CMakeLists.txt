cmake_minimum_required(VERSION 3.8)
project(gui_tic_tac_toe)

set(CMAKE_CXX_STANDARD 11)

set(wxWidgets_ROOT_DIR C:/Users/Public/cpp/wxWidgets-3.0.4)
set(wxWidgets_LIB_DIR C:/Users/Public/cpp/wxWidgets-3.0.4/lib/vc_x64_lib)
set(wxWidgets_CONFIGURATION msw)

find_package(wxWidgets REQUIRED net gl core base)

if(wxWidgets_FOUND)
	include(${wxWidgets_USE_FILE})

	set(SOURCE_FILES main.cpp app.h app.cpp frame.h frame.cpp 
	                 panel.h panel.cpp)

	add_executable(gui_tic_tac_toe_exe WIN32 ${SOURCE_FILES})
	target_link_libraries(gui_tic_tac_toe_exe ${wxWidgets_LIBRARIES} tic_tac_toe_library)
endif()
