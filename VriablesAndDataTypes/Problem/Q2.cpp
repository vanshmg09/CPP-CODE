#include <iostream>
using namespace std;

int main () {
    float pencil, pen, eraser;

    cout<<"Enter cost of pencil:";
    cin>>pencil;

    cout<<"Enter cost of pen:";
    cin>>pen;

    cout<<"Enter cost of eraser:";
    cin>>eraser;

    float total = pencil + pen + eraser ; 

    total = total+  (total * 0.18);

    cout<<"Total cost is "<<total;

    return 0;
}