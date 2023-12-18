#include<iostream>
using namespace std;
class Rectangle{
    public:
    int l;
    int b;

    Rectangle(){
        l=0;
        b=0;
    }
    Rectangle(Rectangle &r)
    {
        l=r.l;
        b=r.b;
    }
    ~Rectangle(){ // destructor
        cout<<"Destructor is called"<<endl;
    }
};

int main()
{

    Rectangle *r0=new Rectangle();
    r0->l=10;
    r0->b=11;
    cout<<r0->l<<" - "<<r0->b<<endl;
    delete r0; 
    Rectangle r1;
    r1.l=5;
    r1.b=6;

    cout<<"First Object "<<r1.l<<" - "<<r1.b<<endl;
    Rectangle r2(r1);
    cout<<"After using copy constructor "<<r2.l<<" - "<<r2.b<<endl;
    return 0;
}