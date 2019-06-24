#include<iostream>
using namespace std;
class cuboid
{
public:
	void Surface_Area();
	void volume();
	void set();
private:
	float length;
	float width;
	float height;
};

int main()
{
	cuboid a[3];
	void fun(cuboid);
/*	a.set();
	a.Surface_Area();
	a.volume();

	b.set();
	b.Surface_Area();
	b.volume();
	
	c.set();
	c.Surface_Area();
	c.volume();*/
	for(int i=0;i<3;i++)
	fun(a[i]);
		
	return 0;
}
void fun(cuboid i)
{
	i.set();
	i.Surface_Area();
	i.volume();
}

void cuboid::set()
{
	cin>>length;
	cin>>width;
	cin>>height;
}

void cuboid::Surface_Area()
{
	float S_A;
	S_A = (length*width + width*height + height*length)*2;
	cout<<"Surface area is:"<<S_A<<endl;
}

void cuboid::volume()
{
	float v;
	v = length*width*height;
	cout<<"Volume is:"<<v<<endl;
}