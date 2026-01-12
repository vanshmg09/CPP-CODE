#include<iostream>
using namespace std;

class Student{
    string name;
    float cgpa;
public:
    //Setter
    void setName(string nameVal){
        name = nameVal;
    }

    void setCgpa(float cgpaVal){
        cgpa = cgpaVal;
    }

    //Getter

    string getName(){
        return name;
    }

    float getCgpa(){
        return cgpa;
    }

    void getPercent(){
        cout<<(cgpa * 10)<<"%";
    }
};

class User{
    int id;
    string username;
    string password;
    string bio;

    void deactivate(){
        cout<<"Account deleted";
    }

    void editBio(string newBio){
        bio = newBio;
    }
};

int main(){
    Student s1;
    
    s1.setName("vansh");
    s1.setCgpa(8.9);

    cout<<s1.getName()<<endl;
    cout<<s1.getCgpa()<<endl;

}