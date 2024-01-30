#include <iostream>
#include <string>
using namespace std;

void readData(float grade[3])
{
    cout << "enter the 1st number : \n";
    cin >> grade[0];
    cout << "enter the 2nd number : \n";
    cin >> grade[1];
    cout << "enter the 3rd number : \n";
    cin >> grade[2];
}

void calculAvr(float grade[3])
{
    cout << "****************************** \n";
    float result = (grade[0] + grade[1] + grade[2]) / 3;
    cout << "The average it is : " << result << endl;
}

int main()
{
    float grade[3];
    readData(grade);
    calculAvr(grade);
}

