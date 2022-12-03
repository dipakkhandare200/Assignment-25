//Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
//number of instance member variables and also define instance member functions to
//set values for time and display values of time.
#include<iostream>
using namespace std;
class Time
{
private:
    int a,b,c;
public:
    void setdata(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
    void showdata()
    {
        cout<<a<<":"<<b<<":"<<c<<endl;
    }
};
int main()
{
    Time c1,c2;
    c1.setdata(5,45,20);
    c2.setdata(7,59,32);
    c1.showdata();
    c2.showdata();
}
