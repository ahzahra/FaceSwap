/*
 * main.cpp
 *
 *  Created on: Mar 13, 2018
 *      Author: Ahmed
 */

#include <iostream>
#include <functional>
//#include <opencv2/opencv.hpp>

using namespace std;


int main(int argc, char** argv) {
	int a = 5;
	auto f = [&]() { a++; };
	f();
	f();
	cout << a << endl;
	return 0;
}

