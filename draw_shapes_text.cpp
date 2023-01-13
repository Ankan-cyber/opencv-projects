#include <iostream>
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>

using namespace std;
using namespace cv;

int main(){
    Mat img(512,512, CV_8UC3 , Scalar(255,255,255));

    circle(img,Point(256,256),200,Scalar(17,165,27),FILLED);
    Rect roi(110,225,290,60);
    rectangle(img,roi,Scalar(255,255,255),FILLED);
    line(img,Point(112,296),Point(390,296),Scalar(255,255,255),2);

    putText(img,"ANKAN'S NETWORK",Point(137, 262),FONT_HERSHEY_DUPLEX,0.8,Scalar(239,12,209),2);
    imshow("image",img);
    waitKey(0);
    return 0;
}