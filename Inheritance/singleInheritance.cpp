#include<iostream>
using namespace std;

class Parent{
    public:
    Parent(){
        cout<<"This is Parent Class"<<endl;
    }
};

class Child: public Parent{
    public:
    Child(){
        cout<<"This is Child Class"<<endl;
    }
};

int main()
{
    Child c;
    return 0;
}