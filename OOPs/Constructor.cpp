#include<iostream>
using namespace std;

class hero{
    public:
    hero(){
        cout<<"Constructor called"<<endl;
    }
};
int main(){
    hero raja;
    return 0;
}