#include "SortingAlgor.h"

SortingAlgor::SortingAlgor() :SortingAlgor(ALGOR_NAME, BEST_TIME, AVG_TIME, WORST_TIME, AUX_SPACE, IS_STABLE) {}

SortingAlgor::SortingAlgor(string algorName, string bestTime, string avgTime, string worstTime, string auxSpace, bool isStable) : Complexity(bestTime, avgTime, worstTime, auxSpace){
	this->algorName = algorName;
	this->isStable = isStable;
}

SortingAlgor::~SortingAlgor() {}

string SortingAlgor::getAlgorName() {
	return this->algorName;
}

bool SortingAlgor::getIsStable() {
	return this->isStable;
}

void SortingAlgor::setAlgorName(string algorName) {
	this->algorName = algorName;
}

void SortingAlgor::setIsStable(bool isStable) {
	this->isStable = isStable;
}

//void SortingAlgor::readFile(string fileName, vector<SortingAlgor>& algors) {
//	ifstream file(fileName, ios_base::in);
//	string line;
//	//while (!file.eof()) {
//	for (int i = 0; i < 1; ++i) {
//		getline(file, line);
//		cout << line << endl;
//		vector<string> propVals;
//		UtilsController::splitor(line, propVals);
//		//track(propVals.size());
//		string algorName = propVals[0];
//		string bestTime = propVals[1];
//		string avgTime = propVals[2];
//		string worstTime = propVals[3];
//		string auxSpace = propVals[4];
//		bool isStable = atoi(propVals[5].c_str());
//		//track(algorName);
//		//track(bestTime);
//		//track(avgTime);
//		//track(worstTime);
//		//track(auxSpace);
//		//track(isStable);
//		SortingAlgor temp = SortingAlgor(algorName, bestTime, avgTime, worstTime, auxSpace, isStable);
//
//		//track(temp.getAlgorName());
//		//data.push_back(temp);
//	}
//	//}
//	file.close();
//}
