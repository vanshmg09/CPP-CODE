#include<iostream>
using namespace std;

void func(int (*matrix)[4], int n, int m){
    // cout<<matrix<<"="<<&matrix[0][0]<<endl;
    // cout<<matrix+1<<"!="<<&matrix[0][1]<<endl;
    // cout<<matrix+1<<"="<<&matrix[1][0];

    cout<<*(*(matrix+2)+2);
}

int main(){
    int matrix[4][4] ={{1,2,3,4},
                       {5,6,7,8},
                       {9,10,11,12},
                       {13,14,15,16}};

    
    func(matrix,4,4);
}