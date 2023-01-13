#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;

// Some basic functions of opencv on image
// int main()
// {
//     string path = "Resources/test.png";
//     Mat img = imread(path);
//     Mat imgGray, imgCanny, imgBlur, imgDil, imgErode;

//     cvtColor(img, imgGray, COLOR_BGR2GRAY);
//     Canny(img, imgCanny, 25, 75);
//     GaussianBlur(img, imgBlur, Size(5, 5), 5);

//     Mat kernel = getStructuringElement(MORPH_RECT, Size(3, 3));
//     dilate(imgCanny, imgDil, kernel);
//     erode(imgDil, imgErode, kernel);

//     imshow("image", img);
//     imshow("image Gray", imgGray);
//     imshow("image Canny", imgCanny);
//     imshow("image Blur", imgBlur);
//     imshow("image Dilate", imgDil);
//     imshow("image Erode", imgErode);
//     waitKey(0);
//     return 0;
// }

// Some basic functions of opencv on video
int main()
{
    Mat img;
    Mat imgGray, imgCanny, imgBlur, imgDil, imgErode;
    VideoCapture cap(0);
    while (true)
    {
        cap.read(img);

        cvtColor(img, imgGray, COLOR_BGR2GRAY);
        Canny(img, imgCanny, 150, 150);
        GaussianBlur(img, imgBlur, Size(9, 9), 5);

        Mat kernel = getStructuringElement(MORPH_RECT, Size(3, 3));

        dilate(imgCanny, imgDil, kernel);
        erode(imgDil, imgErode, kernel);

        imshow("image", img);
        imshow("image Gray", imgGray);
        imshow("image Canny", imgCanny);
        imshow("image Blur", imgBlur);
        imshow("image Dilate", imgDil);
        imshow("image Erode", imgErode);
        waitKey(1);
    }
    return 0;
}