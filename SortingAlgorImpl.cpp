#include "SortingAlgor.h"

SortingAlgor::SortingAlgor() :SortingAlgor(ALGOR_NAME, BEST_TIME, AVG_TIME, WORST_TIME, AUX_SPACE, IS_STABLE) {}

SortingAlgor::SortingAlgor(string algorName, string bestTime, string avgTime, string worstTime, string auxSpace, bool isStable) {
	this->algorName = algorName;
	this->isStable = isStable;
}

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

