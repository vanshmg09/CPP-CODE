#include<iostream>
using namespace std;

class User{
    int id;
    string password;

public: 
    string username;

    User(int id){
        this->id = id;
    }

    void setPass(string user, string pass){
        username = user;
        password = pass;
    }

    string getPass(){
        return password;
    }
};

int main(){
    User u1(1);
    u1.setPass("vansh", "kl45");
    cout<<"Username: "<<u1.username<<endl;
    cout<<"Password: "<<u1.getPass();
}