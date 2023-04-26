#include <string>
#include <iostream>
#include "FileController.h"
#include "MergeSort.h"
#include "QuickSort.h"
using namespace std;


void autoGenrFiles() {
    string size[11] = {
    "1000", "2000", "3000", "5000", "10000", "20000", "30000", "50000", "100000", "200000", "300000"
    };
    //string fileName = "Datas//int_2000_rand.txt";
    for (int i = 0; i < 11; i++) {
        string path = "Datas//float_";
        path += size[i];
        path += "_desc.txt";
        cout << path << endl;
        int n = atoi(size[i].c_str());
        FileController::createFile(path, n, 0, 20000, 2);
        float* arr;
        FileController::readFile(path, arr, n);
        //MergeSort::sort(arr, n, );
        FileController::writeFile(path, arr, n);
    }
}

// KHỞI TẠO DATA OBJECT
/*vector<string> firstNames0;
vector<string> firstNames1;
vector<string> lastNames;
vector<string> dobs;
vector<Major> majors;
vector<Person> persons;
vector<Student> students;
FileController::readFile("Datas//Basic//data_first-middle_name_female.txt", firstNames0);
FileController::readFile("Datas//Basic//data_first-middle_name_female.txt", firstNames1);
FileController::readFile("Datas//Basic//data_last_name.txt", lastNames);
FileController::readFile("Datas//Basic//data_majors.txt", majors);
DataInitController::initDobData(dobs);
cout << dobs.size() << endl;
cout << majors.size() << endl;
DataInitController::initPersonData(persons, 30000, firstNames0, firstNames1, lastNames, dobs);
DataInitController::initStudentData(students, 7500, 2019, persons, majors);
DataInitController::initStudentData(students, 7500, 2020, persons, majors);
DataInitController::initStudentData(students, 7500, 2021, persons, majors);
DataInitController::initStudentData(students, 7500, 2022, persons, majors);
cout << students.size() << endl;
FileController::createFile("test.txt",30000, students);*/



//template <typename datatype> void sort(datatype arr[], int n);




// TEST SORTING ALGORS
//bool arr1[5]{ 1,0,1,1,0 };
//int arr2[5]{ 1,3,2,5,4 };
//float arr3[5]{ 1.1, 0.9, 2.3, 1.5, 1.4 };
//string arr4[5]{ "John", "Tony", "Anna", "Tom", "Jonny" };
//
//HeapSort::sort(arr1, 5, [](bool left, bool right)->bool {return left < right; });
//HeapSort::sort(arr2, 5, [](int left, int right)->bool {return left < right; });
//HeapSort::sort(arr3, 5, [](float left, float right)->bool {return left < right; });
//HeapSort::sort(arr4, 5, [](string left, string right)->bool {return left < right; });
//
//for (int i = 0; i < 5; i++) {
//	cout << arr1[i] << " ";
//}
//cout << endl;
//
//for (int i = 0; i < 5; i++) {
//	cout << arr2[i] << " ";
//}
//cout << endl;
//
//for (int i = 0; i < 5; i++) {
//	cout << arr3[i] << " ";
//}
//cout << endl;
//
//for (int i = 0; i < 5; i++) {
//	cout << arr4[i] << " ";
//}
//cout << endl;




// LAMBDA EXPRESSION
//int arr[5]{ 1,3,2,5,4 };

//InsertionSort::sort(arr, 5, [](int a, int b)->bool {return a < b; });
//BubbleSort::sort(arr, 5, cmp);







// INIT STUDENT DATA
//vector<string> firstNames0;
//vector<string> firstNames1;
//vector<string> lastNames;
//vector<string> dobs;
//vector<Major> majors;
//vector<Person> persons;
//FileController::readFile("Datas//Basic//data_first-middle_name_female.txt", firstNames0);
//FileController::readFile("Datas//Basic//data_first-middle_name_female.txt", firstNames1);
//FileController::readFile("Datas//Basic//data_last_name.txt", lastNames);
//FileController::readFile("Datas//Basic//data_majors.txt", majors);
//DataInitController::initDobData(dobs);
//cout << dobs.size() << endl;
//cout << majors.size() << endl;
//DataInitController::initPersonData(persons, 30000, firstNames0, firstNames1, lastNames, dobs);
//string size[7] = { "1000", "2000", "3000", "5000", "10000", "20000", "30000" };
//for (int i = 0; i < 7; ++i) {
//	vector<Student> students;
//	int n = atoi(size[i].c_str());
//	DataInitController::initStudentData(students, n / 4, 2019, persons, majors);
//	DataInitController::initStudentData(students, n / 4, 2020, persons, majors);
//	DataInitController::initStudentData(students, n / 4, 2021, persons, majors);
//	DataInitController::initStudentData(students, n / 4, 2022, persons, majors);
//	//cout << students.size() << endl;
//	track(students.size());
//	track(n);
//	//cout << n << endl;
//	string field = "name";
//	string order = "desc";
//
//
//	string path = "Datas//Student_data//";
//	path += field;
//	path += "//";
//	path += order;
//	path += "//";
//	path += field;
//	path += "_";
//	path += size[i];
//	path += "_";
//	path += order;
//	path += ".txt";
//	cout << path << endl;
//	//FileController::readFile(path, students);
//	QuickSort::sort(students, [](Student left, Student right)->bool
//		{
//			string str1 = left.getFirstName() + left.getLastName();
//			string str2 = right.getFirstName() + right.getLastName();
//			return str1 > str2;
//		});
//	FileController::createFile(path, n, students);
//}