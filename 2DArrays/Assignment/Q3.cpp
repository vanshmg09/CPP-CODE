#include<iostream>
using namespace std;

void transpose(int arr[][3],int n, int m ){
    int arr2[m][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            arr2[j][i] = arr[i][j];
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }

}

int main(){
    int arr[][3] ={{4,7,8},
                    {8,8,7}};

    transpose(arr,2,3);
}