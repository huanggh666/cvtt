#include<opencv.hpp>
#include<vector>
#include<iostream>
using namespace std;
void detection(cv::Mat);
//void img_resize(cv::Mat A)
//{
//	cv::Mat B;
//	cv::resize(A,B, cv::Size(int(0.2*A.cols), int(0.2*A.rows)));
//	cv::resize(B, B, cv::Size(int(5*B.cols), int(5*B.rows)));
//	cv::GaussianBlur(B,B,cv::Size(5,5),1,1);
//	cv::imshow("B", B);
//	cv::waitKey();
//}
int main()
{
	cv::Mat A = cv::imread("E:/picture/image/25.jpg");
	cv::resize(A, A, cv::Size (int(0.4*A.cols), int(0.4*A.rows)));
	cv::imshow("A", A);
	cv::waitKey(3000);
	cv::destroyWindow("A");
	cv::namedWindow("Nomal", CV_WINDOW_NORMAL);
	imshow("Nomal", A);
	cv::waitKey();
	return 0;
}