#include <iostream>
#include <string>
using namespace std;


struct strInfo {
    string FirstName;
    string LastName;
    int Age;
    string Phone;
};

void ReadInfo(strInfo & Info)
{

    cout << "Please enter FirstName?\n";
    cin >> Info.FirstName;

    cout << "Please enter LastName?\n";
    cin >> Info.LastName;

    cout << "Please enter Age?\n";
    cin >> Info.Age;

    cout << "Please enter Phone?\n";
    cin >> Info.Phone;
    cout << "\n\n";


}

void PrintInfo(strInfo Info)
{

    cout << "\n**********************************\n";

    cout << "FirstName: " << Info.FirstName << endl;
    cout << "LastName: " << Info.LastName << endl;
    cout << "Age: " << Info.Age << endl;
    cout << "Phone: " << Info.Phone << endl;

    cout << "**********************************\n\n";


}

void ReadPersonInfo(strInfo Person[100] ,int & NumberOfPersons)
{
    cout << "combient de persons : \n";
    cin >> NumberOfPersons;

    for (int i = 0;i <= NumberOfPersons - 1;i++)
    {
        cout << "please read info of person : " << i + 1 << endl;
        ReadInfo(Person[i]);
    }

    
}

void PrintPersonInfo(strInfo Person[100],int NumberOfPersons)
{
    for (int i = 0;i <= NumberOfPersons - 1;i++)
    {
        cout << "person : " << i + 1 << endl;
        PrintInfo(Person[i]);
    }
}



int main()
{
    strInfo Persons[100];
    int NumberOfPersons = 1;

    ReadPersonInfo(Persons, NumberOfPersons);
    PrintPersonInfo(Persons, NumberOfPersons);

    return 0;

}
