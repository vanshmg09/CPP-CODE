#include<iostream>
using namespace std;

class Teacher{
public:
    int salary;
    string course;
};

class Student{
public:
    int roll;
    int cgpa;
};

class TA : public Teacher, public Student{
public: 
    string name;
};

int main(){
    TA t1;
    t1.name = "vansh";
    t1.salary = 789;
    t1.roll = 78;

    cout<<t1.name<<endl;
    cout<<t1.salary<<endl;
    cout<<t1.roll<<endl;


}