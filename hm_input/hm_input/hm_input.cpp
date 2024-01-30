#include <iostream>
using namespace std;

int main()
{
	string name;
	int age;
	string city ;
	string country ;
	int M_salary;
	char gender;
	bool married = true;

	cout << "enter ur name : ";
	cin >> name;
	cout << "enter ur age : ";
	cin >> age;
	cout << "enter ur city : ";
	cin >> city;
	cout << "enter ur country : ";
	cin >> country;
	cout << "enter ur salary : ";
	cin >> M_salary;
	cout << "enter ur gender : ";
	cin >> gender;
	cout << "are you married ? ";
	cin >> married;



	cout << "**************************" << endl;
	cout << "Name : " << name << endl;
	cout << "city : " << city << endl;
	cout << "country : " << country << endl;
	cout << "monthly salary : " << M_salary << endl;
	cout << "Yearly salary : " << M_salary * 12 << endl;
	cout << "gender : " << gender << endl;
	cout << "married : " << married << endl;
	cout << "**************************";
	return 0;
}