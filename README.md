# OpenCV Projects

This repository contains a collection of C++ programs that use the OpenCV library for image and video processing. Each program demonstrates different features and functions of the OpenCV library.

## Projects

1. **Image Filtering** - A program that applies various image filtering techniques such as Gaussian blur, median filter, and bilateral filter.

2. **Object Detection** - A program that uses the OpenCV's cascading classifiers to detect objects in an image or video stream.

3. **Image Stitching** - A program that stitches multiple images together to create a panorama.

4. **Video Processing** - A program that applies various video processing techniques such as frame differencing, background subtraction, and motion detection.

5. **Face Detection** - A program that detects faces in an image or video stream using the OpenCV's Haar cascade classifiers.

6. **Optical Flow** - A program that tracks the movement of objects in a video stream using the Lucas-Kanade algorithm.

## Prerequisites

Before running the programs, you need to have the OpenCV library installed on your system. You can install OpenCV by following the instructions on the OpenCV website (https://opencv.org/).

## How to Run

Each program can be compiled and run using a C++ compiler such as g++. You need to link the OpenCV library in order to run the program.

```
g++ -std=c++11 image_filtering.cpp -o image_filtering pkg-config --cflags --libs opencv
./image_filtering
```

Make sure to replace "image_filtering.cpp" with the name of the program you want to run.

## Contributing

If you want to contribute to this repository, feel free to submit a pull request with your own programs or improvements to existing ones.

## License

This repository is not under any license, if you want to use or redistribute it please contact the author or the owner of the repository to get their permission.
