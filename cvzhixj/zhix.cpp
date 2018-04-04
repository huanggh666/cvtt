#include<opencv.hpp>
#include<iostream>
using namespace std;
using namespace cv;
void zhix()
{
	string filename="1.png";
	//cin >> filename;
	Mat img = imread(filename,0),k_d,img_conv;
	Mat k=Mat::zeros(10, 10, CV_8U);
	Mat mk = k(Rect(1, 1, 8, 8));
	mk = 1;
	k = k > 0;
	distanceTransform(k, k_d, CV_DIST_L2,3);
	cout << k_d<< endl;
	k_d = k_d / 1000;
	filter2D(img, img_conv, CV_16S, k_d);
	cout << img_conv << endl;
	system("pause");
}

int main()
{
	zhix();
	return 0;
}