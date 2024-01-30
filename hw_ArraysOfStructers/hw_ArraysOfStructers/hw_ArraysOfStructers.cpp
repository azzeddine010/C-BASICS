#include <iostream>
#include <string>
using namespace std;

struct strInfo {
    string FirstName;
    string LastName;
    int Age;
    string Phone;
};

void EnterValue(strInfo &info)
{
    
    cout << "enter the first name : \n";
    cin >> info.FirstName;
    cout << "enter the last name : \n";
    cin >> info.LastName;
    cout << "enter the Age : \n";
    cin >> info.Age;
    cout << "enter the Phone : \n";
    cin >> info.Phone;
}
void PrintInfo(strInfo info)
{
    
    cout << "***********************\n";
    cout << "FirstName : " << info.FirstName << endl;
    cout << "LastName : " << info.LastName << endl;
    cout << "Age : " << info.Age << endl;
    cout << "Phone : " << info.Phone << endl;
    cout << "***********************\n";
}

void ReadPersonsInfo(strInfo person[2])
{
    EnterValue(person[0]);
    cout << "********************\n";
    EnterValue(person[1]);
}
void PrintPersonInfo(strInfo person[2])
{
    PrintInfo(person[0]);
    PrintInfo(person[1]);

}


int main()
{
    strInfo person[2];
    ReadPersonsInfo(person);
    PrintPersonInfo(person);
}

