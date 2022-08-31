#include <iostream>
#include "sources/Image.hpp"

int main()
{
	Image image;
	image.load();
	image.display();
	image.printInfos();
    return 0;
}