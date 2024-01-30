#include <iostream>
#include <string>
using namespace std;

int main()
{
    string string1, string2, string3;
    cout << "enter your name : " << endl;
    getline(cin , string1);

    cout << "enter string2 : ";
    cin >> string2;
    
    cout << "enter string3 : ";
    cin >> string3;

    cout << "***************************" << endl;

    cout << "the lenght of the string is : ";
    cout << string1.length()<< endl;
    
    cout << "caracter at 0 2 4 7 : ";
    cout << string1[0]<< string1[2]<< string1[4]<< string1[7] << endl;

    cout << "The concatination string2 and string3 : ";
    cout << string2 + string3 << endl;

    cout << "5*10 = " << stoi(string2) * stoi(string3);

    



}