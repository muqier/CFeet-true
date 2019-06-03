// 5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream" 
using namespace std;
class CFeet
{
private:
	int foot;
	int inch;

public:
	CFeet();
	CFeet(int f, int i);
	int setFoot(int f, int i);
	void displayFoot();
	void addOneFoot();
	int getFoot();
	int getInch();
	int check();
	CFeet addFoot(CFeet &od);
	CFeet operator + (CFeet&otemp);
	CFeet operator+(const int &d);
};
CFeet CFeet::operator + (CFeet&otemp)
{
	CFeet temp;
	temp.setFoot(foot + otemp.foot, inch + otemp.inch);
	return temp;
}
CFeet CFeet::addFoot(CFeet &od)
{
	CFeet temp;
	temp.setFoot(foot + od.foot, inch + od.inch);
	return temp;
}
CFeet::CFeet()
{
	foot = 1;
	inch = 12;
}
CFeet::CFeet(int f, int i)
{
	foot = f;
	inch = i;
	check();
}
int CFeet::setFoot(int f, int i)
{
	foot = f;
	inch = i;
	check();
	return 0;
}
void CFeet::displayFoot()
{
	cout << "foot=" << foot << "inch=" << inch << endl;
}
int CFeet::check()
{
	if (inch >= 12 && inch % 12 == 0)
	{
		foot++;
		return 0;
	}
	foot = foot + inch / 12;
	inch = inch % 12;
}

int CFeet::getFoot()
{
	return foot;
}
int CFeet::getInch()
{
	return inch;
}
void CFeet::addOneFoot()
{
	foot = foot + inch / 12;
	inch = inch % 12;

	if (inch >= 12 && inch % 12 == 0)
	{
		foot++;

	}
}
int main()
{
	CFeet od1(2, 34), od2(6, 20), od3;
	od3 = od1.addFoot(od2);

	od1.displayFoot();
	od2.displayFoot();
	od3.displayFoot();
	return 0;
}