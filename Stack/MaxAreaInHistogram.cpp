#include <iostream>
#include <stack>
#include <vector>

using namespace std;

void printArr(vector<int> vec){
    for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }
}

void maxAreaHistogram(vector<int> height){
    int n = height.size();

    vector<int> nsl(n);
    nsl[0] = -1;
    vector<int> nsr(n);

    stack<int> s;
    s.push(0);

    //next smallest left
    for(int i=1; i<height.size(); i++){
        int curr = height[i];

        while(!s.empty() && curr <= height[s.top()]){
            s.pop();
        }

        if(s.empty()){
            nsl[i] = -1;
        }else{
            nsl[i] = s.top();
        }

        s.push(i);
    }

    // to empty the stack
    while(!s.empty()){
        s.pop();
    }

    //next smallest right

    nsr[n-1] = n;
    s.push(n-1);

    for(int i=n-2; i>=0; i--){
        int curr = height[i];

        while(!s.empty() && curr <= height[s.top()]){
            s.pop();
        }

        if(s.empty()){
            nsr[i] = n;
        }else{
            nsr[i] = s.top();
        }

        s.push(i);
    }

    int maxArea = 0;
    for(int i=0; i<height.size(); i++){
        int length = height[i];
        int width = nsr[i] - nsl[i] - 1 ;
        int area = length * width;

        maxArea = max(area, maxArea);
    }

    printArr(nsl); cout<<endl;
    printArr(nsr); cout<<endl;


    cout<<"max area of histogram is : "<<maxArea;
}

int main(){
    vector<int> height = {2, 1, 5, 6, 2, 3};
    
    maxAreaHistogram(height);

}