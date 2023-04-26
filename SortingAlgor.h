#pragma once
#include "Complexity.h"
#include <vector>
class SortingAlgor : public Complexity {
public:
	string ALGOR_NAME = "NULL";
	bool IS_STABLE = NULL;

private:
	string algorName;
	bool isStable;

public:
	SortingAlgor();
	SortingAlgor(string algorName, string bestTime, string avgTime, string worstTime, string auxSpace, bool isStable);
	string getAlgorName();
	bool getIsStable();
	void setAlgorName(string algorName);
	void setIsStable(bool isStable);
	static void readFile(string fileName, vector<SortingAlgor> &algors);
};

