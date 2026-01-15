// In Functino 

// #include<iostream>
// using namespace std;

// void counter(){
//     static int count = 0;
//     count++;
//     cout<<"counter : "<<count<<endl;
// }


// int main(){
//     counter();
//     counter();
//     counter();

// }



//In Class

// #include<iostream>
// using namespace std;

// class Example{
// public:
//     static int  count ;
// };

// int Example::count = 0;
 
// int main(){
//     Example e1;
//     Example e2;
//     Example e3;

//     cout<<e1.count++<<endl;
//     cout<<e2.count++<<endl;
//     cout<<e3.count++<<endl;

// }


//In Object

#include<iostream>
using namespace std;

class Example{
public:
    Example(){
        cout<<"constructor\n";
    }

    ~Example(){
        cout<<"destructor\n";
    }
};

int main(){
    int a =  0;
    if(a == 0){
        static Example e1;
    }

    cout<<"code ending...\n";

    return 0;
}