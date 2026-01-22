#include<iostream>
using namespace std;

void removeDuplicate(string str, string ans, int i, bool map[]){

    if(i==str.length()){
        cout<<ans;
        return;
    }

    char ch = str[i];
    int mapIdx = (int)(ch - 'a');

    if(map[mapIdx]){ //duplicate
        removeDuplicate(str, ans, i+1, map);
    } else{
        map[mapIdx] = true;
        removeDuplicate(str, ans+str[i], i+1, map);
    }
}

// Without------ "i"-----

// void removeDuplicate(string str, string ans, bool map[]){

//     if(str.length() == 0){
//         cout<<ans;
//         return;
//     }

//     int n = str.length();
//     char ch = str[n-1];
//     int mapIdx = (int)(ch - 'a');
//     str = str.substr(0, n-1);

//     if(map[mapIdx]){ //duplicate
//         removeDuplicate(str, ans, map);
//     } else{
//         map[mapIdx] = true;
//         removeDuplicate(str, ans+ch, map);
//     }
// }

int main(){
    string str = "abababab";
    string ans;
    bool map[26] = {false};

    removeDuplicate(str,ans,map);

}