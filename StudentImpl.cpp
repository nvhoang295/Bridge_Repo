#include "Student.h"

Student::Student() : Student(STUDENT_ID, GPA, MAJOR_ID, MAJOR_NAME, FIRST_NAME, LAST_NAME, GENDER, DOB) {}
Student::Student(int studentId, float gpa, int majorId, string majorName, string firstName, string lastName, bool gender, string dob) : Major(majorId, majorName), Person(firstName, lastName, gender, dob) {
	this->studentId = studentId;
	this->gpa = gpa;
}

int Student::getStudentId() {
	return this->studentId;
}

float Student::getGpa() {
	return this->gpa;
}

void Student::setStudentId(int studentId) {
	this->studentId = studentId;
}

void Student::setGpa(float gpa) {
	this->gpa = gpa;
}

