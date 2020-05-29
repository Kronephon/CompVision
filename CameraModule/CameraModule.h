#pragma once

#include <exception>

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>
//todo: refine includes

class CameraModule
{
public:
    CameraModule(int i);
    CameraModule() = delete;
    void operator>>(cv::Mat&);
    ~CameraModule();
private:
    cv::VideoCapture capModule;
};