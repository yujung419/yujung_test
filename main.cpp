
#include <iostream>

#include <opencv2/opencv.hpp>


#ifdef _DEBUG
#pragma comment(lib, "opencv_world450d.lib") //debug�϶� �� ���̺귯�� ����
#else
#pragma comment(lib, "opencv_world450.lib") //release�� �� �� ���̺귯�� ����
#endif


using namespace std;
using namespace cv;

//Mat imgA;

int main(int, char) {
	namedWindow("img", 0);
	Mat img = imread("kang.jpg");
	
	imshow("img", img);

	waitKey(0);
	

	destroyAllWindows();

	return 0;
}