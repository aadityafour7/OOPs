#include<iostream>
using namespace std;

class ABC{
    int x;   // private by default

    public:

    void set(int n)
    {
        x=n;
    }
    int get(){
        return x;
    }

};

int main()
{
    ABC obj1;
    obj1.set(5);
    cout<<obj1.get()<<endl;
    return 0;
}