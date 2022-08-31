#include "Image.hpp"
#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>

Image::Image ()
{
}

void Image::load()
{
	m_image = cv::imread("images/" + m_name, 1);
	getDimensions();
}

void Image::display()
{
	cv::namedWindow("Display Image", cv::WINDOW_AUTOSIZE);
    cv::imshow("Display Image", m_image);
    cv::waitKey(0);
}

void Image::printInfos()
{
	std::cout << "Image Name : " + m_name << std::endl;
	printf("Width : %d px", m_width);
	std::cout << std::endl;
	printf("Height : %d px", m_height);
	std::cout << std::endl;
}

void Image::getDimensions()
{
	m_width = (int) m_image.size().width;
	m_height = (int) m_image.size().height;
}