#include "Complexity.h"
Complexity::Complexity() : Complexity(BEST_TIME, AVG_TIME, WORST_TIME, AUX_SPACE) {}

Complexity::Complexity(string bestTime, string avgTime, string worstTime, string auxSpace) {
	this->bestTime = bestTime;
	this->avgTime = avgTime;
	this->worstTime = worstTime;
	this->auxSpace = auxSpace;
}

string Complexity::getBestTime() {
	return this->bestTime;
}

string Complexity::getAvgTime() {
	return this->avgTime;
}

string Complexity::getWorstTime() {
	return this->worstTime;
}

string Complexity::getAuxSpace() {
	return this->auxSpace;
}

void Complexity::setBestTime(string bestTime) {
	this->bestTime = bestTime;
}

void Complexity::setAvgTime(string avgTime) {
	this->avgTime = avgTime;
}

void Complexity::setWorstTime(string worstTime) {
	this->worstTime = worstTime;
}

void Complexity::setAuxSpace(string auxSpace) {
	this->auxSpace = auxSpace;
}
