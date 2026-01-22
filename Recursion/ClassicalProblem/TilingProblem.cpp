#include<iostream>
using namespace std;

int tilingProblem(int n){

    if(n==0 || n==1){
        return 1;
    }

    //vertical
    int ans1 = tilingProblem(n-1);
     
    //horizontal
    int ans2 = tilingProblem(n-2);
                        // f(n) = v  +   h;
    return ans1 + ans2;  // f(n) = f(n-1) + f(n-2);

}

int main(){
    cout<<tilingProblem(5);
}