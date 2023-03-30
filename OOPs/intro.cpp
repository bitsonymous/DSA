#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int RollNumber;
};

int main(){
    // statically creation
    student s1;
    student s2, s3, s4;

    // dynamically creation
    student *s6 = new student;
    
    s1.name = "Himamshu";
    s1.RollNumber = 71;
    cout<<s1.name<<endl;
    cout<<s1.RollNumber<<endl;
    
}