#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l{1,2,3,4,4,5};
    list<string> s{"apple", "pineapple", "Mango"};
    s.push_back("Banana");
    for(auto x:s){
        cout<<x<<" ,";
    }
    for(auto x:l){
        cout<<x<<" ,";
    }

}
