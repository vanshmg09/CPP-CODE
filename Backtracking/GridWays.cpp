#include<iostream>
using namespace std;

int gridWays(int r, int c, int m, int n, string ans){
    if(r==m-1 && c==n-1){
        cout<<ans<<endl;
        return 1;
    }

    if(r>=m || c>=n){
        return 0;
    }

    // right
    int ways1 = gridWays(r, c+1, m, n, ans+"R");

    //down
    int ways2 = gridWays(r+1, c, m, n, ans+"D");

    return ways1 + ways2;


}

int main(){
    int n = 3;
    int m = 3;
    string ans = "";

    cout<<gridWays(0, 0, m, n, ans);
}