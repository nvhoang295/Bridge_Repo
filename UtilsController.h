#pragma once
#include <vector>
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

class UtilsController {
public:
	static int binPow(int a, int n);
	static float binPow(float a, int n);
	static void splitor(string str, vector<string> &words);
	static string reOrderString(string str);
	static string removeSpace(string str);
	static bool checkYear(int year);
};

