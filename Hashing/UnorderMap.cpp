#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main(){
    unordered_map <string, int> m;

    m["Nepal"] = 10;
    m["India"] = 150;
    m["US"] = 50;

    for(pair<string, int> country : m){
        cout<<country.first <<","<<country.second<<"\n";
    }

    cout<<m.count("london")<<"\n";
    m.erase("US");

      for(pair<string, int> country : m){
        cout<<country.first <<","<<country.second<<"\n";
    }
}
