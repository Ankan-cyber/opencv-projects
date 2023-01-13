#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;

// Resize and Crop image
// int main()
// {
//     string path = "Resources/test.png";
//     int size = 316;
//     Mat img = imread(path);
//     Mat imgResize, imgCrop;

//     resize(img,imgResize,Size(),0.6,0.6);
//     Rect roi(100,280,200,200);
//     imgCrop = img(roi);
//     // cout<<img.size();
//     imshow("image", img);
//     imshow("image Resize",imgResize);
//     imshow("image Crop", imgCrop);
//     waitKey(0);
//     return 0;
// }


// Resize and Crop video
int main()
{
    VideoCapture cap(0);
    Mat img;
    Mat imgResize, imgCrop;

    while(true){
    cap.read(img);
    Rect roi(150,150,300,300);
    imgCrop = img(roi);
    resize(img,imgResize,Size(),0.4,0.4);
    imshow("video", img);
    imshow("video resize",imgResize);
    imshow("video crop",imgCrop);
    waitKey(1);
    }
    return 0;
}