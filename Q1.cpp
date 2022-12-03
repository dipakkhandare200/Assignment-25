//1. Define a class Complex to represent a complex number. Declare instance member
//variables to store real and imaginary part of a complex number, also define instance
//member functions to set values of complex number and print values of complex
//number
#include<iostream>
using namespace std;
class complex
{
private:
    int a,b;
public:
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void showdata()
    {
        cout<<"real="<<a<<"imagenary="<<b<<endl;
    }
};
int main()
{
    complex c1,c2;
    c1.setdata(5,7);
    c2.setdata(7,8);
    c1.showdata();
    c2.showdata();
}
