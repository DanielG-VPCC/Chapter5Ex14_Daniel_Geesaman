/*
Title:Chapter 5 Exercise 14 - Student Lineup
File name:Chapter5Ex14_Daniel_Geesaman.cpp
Programmer:Daniel Geesaman
Date:12/5/2024
Requirements:

14. Student Line Up

A teacher has asked all her students to line up according to their first name.
For example, in one class Amy will be at the front of the line, and Yolanda will be at the end.
Write a program that prompts the user to enter the number of students in the class, then loops to read that many names.
Once all the names have been read, it reports which student would be at the front of the line and
which one would be at the end of the line. You may assume that no two students have the same name.
Input Validation: Do not accept a number less than 1 or greater than 25 for the number of students.


24. Student Line Up Part 2 

Using Files —Student Line Up- Create a second branch for this project and modify your program to do the following:
Create a new branch in your Exercise 14 project that modifies the Student Line Up program described in Programming Challenge 14 
so it reads the student names from the file LineUp.txt. The program should read names from the file until there is no more data to read.
*/

#include <iostream>
#include <fstream>
using namespace std;

int numberStudents();
void studentNameInput(int students);

int main()
{
	static string names[50];
	int students = numberStudents();
	studentNameInput(students);
}

int numberStudents()
{
	int students;
	cout << "How many students are in your class? (1-25)" << endl;
	cin >> students;
	while (students < 1 || students > 25)
	{
		cout << "Please input a valid answer. " << endl;
		cout << "How many students are in your class? (1-25)" << endl;
		cin >> students;
	}
	return students;
}

void studentNameInput(int students)
{
	string names[50];
	for (int index = 0; index < students; index++)
	{
		cout << "enter student's name: " << endl;
		cin >> names[index];
	}
	cout << endl;

	int maxNum;

	for (maxNum = students - 1; maxNum > 0; maxNum--)
	{
		for (int index = 0; index < maxNum; index++)
		{
			if (names[index] > names[index + 1])
			{
				swap(names[index], names[index + 1]);
			}
		}
	}

	for (int index = 0; index < students; index++)
	{
		cout << names[index] << endl;
	}
	
}
