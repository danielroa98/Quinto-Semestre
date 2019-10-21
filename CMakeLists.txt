#
# This is a CMake makefile.  You can find the cmake utility and
# information about it at http://www.cmake.org
#

cmake_minimum_required (VERSION 3.1)
project(fr)

set (CMAKE_CXX_STANDARD 11)

 set(SOURCE 	classification/svm.cpp
				common/common.cpp
				test_svm.cpp
    )

 set(HEADERS	classification/svm.h
				common/common.h
				test_svm.h
    )

# automatic OpenCV finding
# find_package(OpenCV REQUIRED)

# if not, use manual specification of the OpenCVConfig.cmake path
# and comment previous line of automatic finding
find_package(OpenCV REQUIRED PATHS D:/OpenCV/opencv/user_build NO_DEFAULT_PATH)


if(OpenCV_FOUND)
	message("-- Opencv Found")
endif()


set(fr_include 	D:/OpenCV/opencv/user_build/install/include
	)

set(fr_libraries 	D:/OpenCV/opencv/user_build/install/x86/vc15/lib D:/OpenCV/opencv/user_build/lib/Release
	)


include_directories(${fr_include})
link_directories(${fr_libraries})

add_executable(fr videocapture_camera.cpp)
#target_link_libraries(fr opencv_core411.lib opencv_highgui411.lib opencv_imgproc411.lib opencv_videoio411.lib)
target_link_libraries(fr ${OpenCV_LIBS})
