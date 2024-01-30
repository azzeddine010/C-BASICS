#include <iostream>
#include <string>
using namespace std;


int main()
{
	float a[3];
	cout << "enter the first number : ";
	cin >> a[0];
	cout << "enter the second number : ";
	cin >> a[1];
	cout << "enter the third number : ";
	cin >> a[2];

	float Avg = (a[0] + a[1] + a[2]) / 3;

	cout << "*********************\n";
	cout << "The avarage of grades it's :  " << Avg ;

}

