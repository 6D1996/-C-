#include<iostream>
using namespace std;
class Box
{
public:
	Box(int h = 10, int w = 12, int len = 15):height(h),width(w),length(len){}
	int volume();
private:
	int height;
	int width;
	int length;
};

int Box::volume()
{return(height*width*length);}

int main()
{
	Box a[3]={
	Box(1,2,3),
	Box(2,3,4),
	Box(3,4,5)
	};
	for(int i=0;i<3;i++)
	cout<<"volume of a["<<i<<"] is "<<a[i].volume()<<endl;

}