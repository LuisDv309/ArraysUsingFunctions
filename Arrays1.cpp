// Arrays1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Write two functions as follows 
//Receive input using StudentInput() for student nameand grades for 2 papers(CS101 and CS102)
//
//Display output using StudentOutput() the student name, totaland average grades.
//
//Consider doing this for 5 students using a single dimensional array.


#include <iostream>
using namespace std;
//Prototype//
float StudentInput();

int main()
{
	int total[5];
	for (int i = 0; i < 5; i++) {
		total[i] = StudentInput();
		cout << "The total grade is:" << total[i] << endl;
		cout << "The average grade is:" << total[i] / 2 << endl;

	}
}
float StudentInput() {
	string name;
	float grade1, grade2, total;
	cout << "\nEnter the name of the Student : " << endl;
	cin >> name;
	cout << "\nEnter the grade1" << endl;
	cin >> grade1;
	cout << "\nEneter grade2" << endl;
	cin >> grade2;
	total = grade1 + grade2;
	cout << "\nThe name of the student is :" << name << endl;
	cout << "\nGrade 1 = " << grade1 << endl;
	cout << "\nGrade 2 = " << grade2 << endl;
	return(total);
}



