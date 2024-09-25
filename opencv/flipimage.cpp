//so this code for flipping the image was written and saved using nano and then executed accordingly although the same could be done using vim and then writing the code inside bim
//sudo apt update
//sudo apt install vim
//after using vim to write the code inside it and then to run it we can do it using the command : vim filename
//also the following vim commands i used which have to be used frequently : 
// i   = editing the code inside vim file
// :w  - saving the file 
// :wq - save and quit
//

#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    cv::VideoCapture cap(0);
    if (!cap.isOpened()) {
        std::cerr << "Error: Cannot open camera" << std::endl;
        return -1;
    }
    cv::Mat frame, flipped_frame;
    cap >> frame;
    if (frame.empty()) {
        std::cerr << "Error: Couldn't capture frame" << std::endl;
        return -1;
    }
    cv::flip(frame, flipped_frame, 1);
    cv::imshow("Original Frame", frame);
    cv::imshow("Flipped Frame", flipped_frame);
    cv::waitKey(0);
    cap.release();
    cv::destroyAllWindows();
    return 0;
}
