#include <iostream>
#include <string>
using namespace std;

struct salary {
    int M_salary;
};
struct person {
    string name;
    int age;
    salary Salary;
};
struct adresse {
    string contry;
    string city;
};



struct personal {
    bool married;
    char gender;
};

int main()
{
    person prs;
    adresse adr;
    //salary slr;
    personal prl;
    cout << "enter your name : " << endl;
    cin >> prs.name;
    cout << "enter your age : " << endl;
    cin >> prs.age;
    cout << "enter your city :" << endl;
    cin >> adr.city;
    cout << "enter your country : " << endl;
    cin >> adr.contry;
    cout << "enter your month salary : " << endl;
    cin >> prs.Salary.M_salary;
    cout << "enter your gender : " << endl;
    cin >> prl.gender;
    cout << "are u married : " << endl;
    cin >> prl.married;


    cout << "********************************" << endl;
    cout << "name : " << prs.name << endl;
    cout << "age : " << prs.age << endl;
    cout << "city : " << adr.city << endl;
    cout << "country : " << adr.contry << endl;
    cout << "monthly salary : " << prs.Salary.M_salary << endl;
    cout << "yearly salary : " << prs.Salary.M_salary * 12 << endl;
    cout << "gender : " << prl.gender << endl;
    cout << "married : " << prl.married << endl;
    cout <<"*********************************" << endl;

}

