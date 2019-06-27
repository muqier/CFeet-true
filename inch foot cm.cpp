// 1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;

int main() {
	int cm;
	cin >> cm;
	int foot = cm / 100.0 / 0.3048;
	int inch = (cm / 100.0 / 0.3048 - foot) * 12;
	cout << foot << " " << inch << " " << endl;
	return 0;
}
