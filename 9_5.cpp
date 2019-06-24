#include<string>
#include<iostream>
using namespace std;
class Student
{
public:
	Student(int n, string nam, char s)
	{
	num = n; 
	strcpy(name,nam.c_str());
	//name = nam;≤ª∫√ π
	sex = s;
	cout<<"Constructor called."<<endl;
	}
	~Student()
	{cout<<"Destructor called."<<num<<endl;}
	void display()
	{
	cout<<"num:"<<num<<endl;
	cout<<"name:"<<name<<endl;
	cout<<"sex:"<<sex<<endl<<endl;
	}
private:
	int num;
	char name[12];
	char sex;
};

	int main()
	{
	Student stud1(8987,"Chen Xianda",'m');
	stud1.display();
	Student stud2(8370,"Wang Liqin",'f');
	stud2.display();
	return 0;
	}
