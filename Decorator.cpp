#include "Decorator.h"

void Decorator::drawHr(int len) {
	for (int i = 0; i < len; i++) {
		cout << "-";
	}
	cout << endl;
}

void Decorator::renderAlgorsHeader() {
	cout << setw(3) << right << "No." << "| ";
	cout << setw(20) << left << "Algor name" << " | ";
	cout << setw(10) << right << right << "Best time" << " | ";
	cout << setw(10) << right << "Avg time" << " | ";
	cout << setw(10) << right << "Worst time" << " | ";
	cout << setw(9) << right << "Aux space" << " | ";
	cout << setw(6) << right << "Stable" << endl;
}