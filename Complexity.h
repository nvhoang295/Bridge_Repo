#pragma once
#include <string>
using namespace std;
class Complexity {
public:
	string BEST_TIME = "NULL";
	string AVG_TIME = "NULL";
	string WORST_TIME = "NULL";
	string AUX_SPACE = "NULL";

private:
	string bestTime;
	string avgTime;
	string worstTime;
	string auxSpace;

public:
	Complexity();
	Complexity(string bestTime, string avgTime, string worstTime, string auxSpace);
	string getBestTime();
	string getAvgTime();
	string getWorstTime();
	string getAuxSpace();
	void setBestTime(string bestTime);
	void setAvgTime(string avgTime);
	void setWorstTime(string worstTime);
	void setAuxSpace(string auxSpace);
};

