#ifndef _IMAGE_H
#define _IMAGE_H

#include <iostream>
#include <string>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>

class Image {
	
	public:
		Image();
		~Image();
		void load();
		void equalizeHistogram();
		void display();
		void printInfos();

	private:
		void getDimensions();
		cv::Mat m_image;
		std::string m_name = "hello_iMac.png";
		int m_width = 0;
		int m_height = 0;
};

#endif