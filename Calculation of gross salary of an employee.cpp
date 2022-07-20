// Calculation of gross salary of an employee.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main(){
	double salary, DA, HRA,gross;

	cout << "Enter your salary" << endl;
	cin >> salary;

	if (salary > 50000) {

		DA = salary * 0.8;
		HRA = salary * 0.6;
	}
	else if (salary >= 45000) {
		DA = salary * 0.75;
		HRA = salary * 0.97;
	}
	else if(salary>=35000){

		DA = salary * 0.89;
		HRA = salary * 0.77;
	}
	else if (salary >= 20000) {

		DA = salary * 0.89;
		HRA = salary * 0.77;
	}
	else if(salary >= 15000) {

		DA = salary * 0.89;
		HRA = salary * 0.77;
	}
	gross = salary + DA + HRA;

	cout << "The gross salary of an employee is:" << gross;

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
