// Define a class Circle and define an instance member function to find the area of the circle.
#include<iostream>
using namespace std;
class  Circle
{
private:
    float a;
    float Area;
public:
    void setdata(float x)
    {
        a=x;
    }
    void showdata()
    {
        Area=a*a*3.14;
        cout<<"Area of circle="<<Area<<endl;
    }
};
int main()
{
    float n1,n2;
Circle c1;
    cout<<"Enter Radius="<<endl;
    cin>>n1;
    c1.setdata(n1);
    c1.showdata();
}
