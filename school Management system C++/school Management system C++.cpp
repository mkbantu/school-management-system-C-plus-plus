// school Management system C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<fstream>
#include<string>
#include <vector>
using namespace std;
struct student {

    string name;
	int id=0;
	float grade;
	

};
void readFromFile() {
	ifstream inFile("students.txt");
	string line;
	while (getline(inFile, line)) {
		cout << "output as Name,ID and Grade Respectively " << endl;
		cout << line << endl;
	}
	inFile.close();
}


int main()
{
	while (true)
	{
		int choice;
		cout << "============WELCOME TO SCHOOL MANAGEMENT SYSTEM============" << endl;
		cout << "1. Add student" << endl;
		cout << "2. View students" << endl;
		cout << "3. Exit" << endl;
		cin >> choice;

	
	
	if (choice == 1) {
		int num;
		cout << "Enter the number of stugent are goingto be added: ";
		cin >> num;
		vector<student> s(num);
		for (int i = 0;i < num;i++) {
			cout << "Enter the name of student: ";
			getline(cin >> ws, s[i].name);
			cout << "Enter the id of student: ";
			cin >> s[i].id;
			cout << "Enter the grade of student: ";
			cin >> s[i].grade;
			ofstream outFile("students.txt", ios::app);

			outFile << s[i].name << "," << s[i].id << "," << s[i].grade << endl;

		}
	}
	else if (choice == 2) {
		readFromFile();
	}
	else if (choice == 3) {
		break;
	}
	else {
		cout << "invalid choice" << endl;
	}
	}

	

 return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
