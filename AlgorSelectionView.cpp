#include "AlgorSelectionView.h"

void AlgorSelectionView::renderAlgorRecord(int index, SortingAlgor data) {
	cout << setw(2) << right << index + 1 << " | ";
	cout << setw(20) << left << data.getAlgorName() << " | ";
	cout << setw(10) << right << right << data.getBestTime() << " | ";
	cout << setw(10) << right << data.getAvgTime() << " | ";
	cout << setw(10) << right << data.getWorstTime() << " | ";
	cout << setw(9) << right << data.getAuxSpace() << " | ";
	cout << setw(6) << right;
	data.getIsStable() ? cout << "YES" << endl : cout << "NO" << endl;
}

void AlgorSelectionView::renderAlgorList(vector<SortingAlgor> datas, bool* selectedAlgors, size_t size, bool haveSelected) {
	if (haveSelected) {
		cout << "DANH SÁCH CÁC THUẬT TOÁN ĐÃ LỰA CHỌN: " << endl;
		Decorator::renderAlgorsHeader();
		for (int i = 0; i < size; ++i) {
			if (selectedAlgors[i]) {
				AlgorSelectionView::renderAlgorRecord(i, datas[i]);
			}
		}
	}
	else {
		system("cls");
		cout << "DANH SÁCH CÁC THUẬT TOÁN: " << endl;
		Decorator::renderAlgorsHeader();
		for (int i = 0; i < size; ++i) {
			if (!selectedAlgors[i]) {
				AlgorSelectionView::renderAlgorRecord(i, datas[i]);
			}
		}
	}
}

size_t AlgorSelectionView::renderAlgorSelection() {
	vector<SortingAlgor> datas;
	string fileName = "Datas//Algors_infor.txt";
	SortingAlgor::readFile(fileName, datas);
	size_t size = datas.size(), choice, cnt = 0;
	bool selectedAlgors[10]{ 0 }, haveDisplaySelected = 0;
	do {
		AlgorSelectionView::renderAlgorList(datas, selectedAlgors, size, 0);
		if (haveDisplaySelected) {
			AlgorSelectionView::renderAlgorList(datas, selectedAlgors, size, 1);
		}
		InputController::inputChoice(choice, size);
		selectedAlgors[choice - 1] = true;
		haveDisplaySelected = 1;
		++cnt;
		if (cnt == size) {
			break;
		}
	} while (choice != size + 1);
	return choice;
}