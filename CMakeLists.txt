cmake_minimum_required(VERSION 2.8)
project( DisplayImage )
find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )
file(GLOB all_SRCS
	"${PROJECT_SOURCE_DIR}/sources/*.hpp"
	"${PROJECT_SOURCE_DIR}/sources/*.cpp"
)
add_executable( DisplayImage main.cpp ${all_SRCS} )
target_link_libraries( DisplayImage ${OpenCV_LIBS} )