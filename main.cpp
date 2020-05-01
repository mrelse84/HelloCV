#include "opencv2/opencv.hpp"
#include <iostream>

using namespace std;
using namespace cv;

int main()
{
	cout << CV_VERSION << endl;

	Mat img = imread("d:/images/opencv_images/lena.jpg");

	if (img.empty())
	{
		cerr << "File open failed!" << endl;
		return -1;
	}

	namedWindow("image");
	imshow("image", img);

	waitKey();

	return 0;
}