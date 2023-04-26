#include <iostream>
#include <vector>
#include <chrono>

#include "Student.h"
#include "SortingAlgor.h"

#include "BubbleSort.h"
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "MergeSort.h"
#include "QuickSort.h"
#include "HeapSort.h"


#include "FileController.h"
#include "DataInitController.h"

#include "AlgorSelectionView.h"
//#include "UtilsController.h"

using namespace std::chrono;
//#define track(x, y) cout << #x << ": " << "| " << #y << ": " << y
#define track(x) cout << #x << ": " << x << endl



int main() {
	//int choice = AlgorSelectionView::renderAlgorSelection
	//string fileName = "Datas//string_datetime_1000_rand.txt";
	//FileController::createStringFile(fileName, 1000, 1999, 2004);


	

	string size[11] = {"1000", "2000", "3000", "5000", "10000", "20000", "30000", "50000", "100000", "200000", "300000"
	};
	vector<string> firstNames0;
	vector<string> firstNames1;
	vector<string> lastNames;
	FileController::readFile("Datas//data_first-middle_name_female.txt", firstNames0);
	FileController::readFile("Datas//data_first-middle_name_male.txt", firstNames1);
	FileController::readFile("Datas//data_last_name.txt", lastNames);
	//string fileName = "Datas//int_2000_rand.txt";
	for (int i = 0; i < 11; i++) {
		double ans = 0.0;
		string datatype = "bool";
		string order = "rand";
		string path = "Datas//";
		path += datatype;
		path += "//";
		path += order;
		path += "//";
		path += datatype;
		path += "_";
		path += size[i];
		path += "_";
		path += order;
		path += ".txt";
		cout << path << endl;
		int n = atoi(size[i].c_str());
		//for (int i = 0; i < 20; i++) {
			bool* arr;
			FileController::readFile(path, arr, n);
			auto startTime = high_resolution_clock::now();
			QuickSort::sort(arr, n, [](bool left, bool right)->bool {
				return left < right;
			});
			auto endTime = high_resolution_clock::now();
			auto duration = duration_cast<microseconds>(endTime - startTime).count();
			ans += duration;
		//}
		cout << ans / 1e6 << " seconds" << endl;
		cout << "______________________" << endl;

	}


		

		//vector<Student> students;
		//Student::readFile("Datas//student_data.txt", students);
		//cout << students[0].getDob() << endl;
		//cout << students.size() << endl;

	//vector<Student> students;
	//FileController::readFile("Datas//test_sort.txt", students);




	










	//for (int i = 0; i < 5; ++i) {
	//	cout << students[i].getStudentId() << " | " << students[i].getMajorId() << endl;
	//}

	//cout << endl;

	//HeapSort::sort(students, [](Student left, Student right)->bool {return left.getMajorId() < right.getMajorId(); });
	////InsertionSort::sort(students, [](Student a, Student b)->bool {return a.getMajorId() < b.getMajorId(); });

	//for (int i = 0; i < 5; ++i) {
	//	cout << students[i].getStudentId() << " | " << students[i].getMajorId() << endl;
	//}




}


