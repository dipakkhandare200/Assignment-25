// Define a class Factorial and define an instance member function to find the Factorial of a number using class.
#include<iostream>
using namespace std;
class  Factorial
{
private:
    int a,b;
    long factorial=1.0;
public:
    void setdata(int x)
    {
        a=x;
        for(int i = 1; i <= x; ++i)
        {
            factorial*=i;
        }
    }
    void showdata()
    {
        cout<<"factorial="<<factorial<<endl;
    }
};
int main()
{
    int n1,n2;
  Factorial c1,c2;
    cout<<"enter 1st  positive number"<<endl;
    cin>>n1;
    cout<<"enter 2nd  positive number"<<endl;
    cin>>n2;
    c1.setdata(n1);
    c2.setdata(n2);
    c1.showdata();
    c2.showdata();
}
