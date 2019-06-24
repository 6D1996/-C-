#include<iostream>
using namespace std;
class cuboid
{
public:
	cuboid(float h = 2.2,float w = 3.3,float l = 4.4);
	float volume();
private:
	float length;
	float width;
	float height;
};

cuboid::cuboid(float h,float w,float l):height(h),width(w),length(l){}

float cuboid::volume()
{return height*width*length;}

int main()
{
cuboid c1;
cout<<"The volume of c1 is "<<c1.volume()<<endl;
cuboid c2(1.1);
cout<<"The volume of c2 is "<<c2.volume()<<endl;
cuboid c3(1.1,2.2);
cout<<"The volume of c3 is "<<c3.volume()<<endl;
cuboid c4(1.1,2.2,3.3);
cout<<"The volume of c4 is "<<c4.volume()<<endl;
return 0;
}
