#include <iostream>
#include <limits>
using namespace std;

int scenario1();
int scenario2();

int main(){
	
	int option;
	
	do{
		cout << "Data Structure and Algorithm \n";
		cout << "Options: \n\n";
		cout << "1. (Dave) Secenario 1 \n";
		cout << "2. (Gabby) Scenario 2 \n";
		cout << "3. Exit \n";
		
		cout << "Please enter your choice: ";
		if(!(cin >> option)){
			cout << "Invalid input! " << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize> :: max(), '\n');
			system("PAUSE");
			system("cls");
			continue;
		}
		
		system("cls");
		
		switch(option){
			case 1:
				scenario1();
				break;
			case 2:
				scenario2();
				break;
			case 3:
				cout << "Program finished...\n";
				break;
			default:
				cout << "Invalid input! \n";
				system("PAUSE");
				system("cls");
				continue;
		}
	}while(option != 3);
	
	
	return 0;
}

int scenario1(){
	cout << "(Dave) 1st scenario \n";
	cout << "Identify your grade whether you passed (75 - 100) or else failed...\n\n";
	
	string var;
	double grade;
	
	while(true){
		cout << "Enter your grades: ";
		if(!(cin >> grade)){
			cout << "Invalid input! " << endl;
			cin.clear();
			cin.ignore();
			continue;
		}else{
			break;
		}
	}
	
	var = grade >= 75 && grade <= 100 ? "Passed \n" : "Failed \n";
	cout << var;
	
	system("PAUSE");
	system("cls");
}

int scenario2(){
	cout << "(Gabby) 2nd scenario \n";
	cout << "Find the quotient of two numbers...\n\n";
	
	long double n1, n2, quo;
	
	while(true){
		cout << "Enter 1st number: ";
		if(!(cin >> n1)){
			cout << "Invalid input! " << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize> :: max(), '\n');
			continue;
		}else{
			break;
		}
	}
	while(true){
		cout << "Enter second number: ";
		if(!(cin >> n2)){
			cout << "Invalid input! " << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize> :: max(), '\n');
			continue;
		}else{
			break;
		}
	}
	
	quo = n1 / n2;
	
	cout << "The sum of " << n1 << " / " << n2 << " is " << quo << endl;
	system("PAUSE");
	system("cls");
}
