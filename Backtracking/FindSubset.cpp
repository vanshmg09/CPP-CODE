#include<iostream>
using namespace std;

void subString(string str, string substr){
    if(str.size() == 0){
        cout<<substr<<endl;
        return;
    }

    char ch = str[0];

    subString(str.substr(1,str.size()-1), substr+ch); //yes

    subString(str.substr(1,str.size()-1), substr); //no

}

int main(){
    string str = "abc";
    string substr = "";

    subString(str, substr);
}