#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>
#include <string>
using namespace std;
using namespace cv;
int main(int argc, char * argv[])
{

	VideoCapture test_video(argv[1]);
	if ( !test_video.isOpened())
	{
		cout<<"Not able to open video." ;
		return 0;
	}
	Mat video_frame;
	int rows, columns;
	for (int i=0;;++i)
	{
		test_video >> video_frame;
		stringstream name;
		name<<"Video_Frame_no_"<<i<<".jpg";
		imwrite(name.str(),video_frame);
		
	}
	return 0;
}
