#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>
#include "CameraModule.h"

using namespace cv;
using namespace std;

int main()
{
	CameraModule cam(1);
	cv::Mat frame;
	while (true) {
		char c = (char)waitKey(1);
		cam >> frame;
		cv::imshow("Camera", frame);
		if (c == 27) {
			break;
		}
	}
	destroyAllWindows();
	return 0;
}