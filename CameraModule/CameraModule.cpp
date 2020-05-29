#include "CameraModule.h"


CameraModule::CameraModule(int i) {
    capModule = cv::VideoCapture(i);
    if (!capModule.isOpened()) {
        throw(std::invalid_argument("unable to open camera"));
        return;
    }
}

void CameraModule::operator>>(cv::Mat &output) {
    capModule >> output;
}


CameraModule::~CameraModule() {
    capModule.release();
}