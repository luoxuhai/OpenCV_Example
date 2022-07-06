#include <iostream>
#include "opencv2/core.hpp"
#include "opencv2/highgui.hpp"

using namespace cv;

void ImageThreshold(String str) {
    Mat image = imread(str);

    imshow("OpenCV_Example", image);
    waitKey(0);
}

int main() {
    String img = "/Users/luoxuhai/Desktop/OpenCV_Example/37284154.jpeg";
    ImageThreshold(img);

    return 0;
}
