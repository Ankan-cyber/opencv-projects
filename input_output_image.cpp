#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;

// Image input
// int main()
// {
//     string path = "Resources/test.png";
//     Mat image = imread(path);
//     imshow("image", image);
//     waitKey(0);
//     return 0;
// }

// Video input
// int main() {

// 	string path = "Resources/test_video.mp4";
// 	VideoCapture cap(path);
// 	Mat img;

// 	while (true) {

// 		cap.read(img);
// 		imshow("Video", img);
// 		waitKey(20);
// 	}
//     return 0;
// }

// Webcam input

int main()
{

    VideoCapture cap(0);
    Mat img;

    while (true)
    {

        cap.read(img);
        imshow("Webcam", img);
        waitKey(1);
    }
    return 0;
}
