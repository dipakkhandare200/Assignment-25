//Define a class Rectangle and define an instance member function to find the area of the rectangle.
#include<iostream>
using namespace std;
class  Rectangle
{
private:
    float a,b;
    float Area;
public:
    void setdata(float x,float y)
    {
        a=x;
        b=y;
    }
    void showdata()
    {
        Area=a*b;
        cout<<"Area of rectangle="<<Area<<endl;
    }
};
int main()
{
    float n1,n2;
Rectangle c1;
    cout<<"Enter length="<<endl;
    cin>>n1;
    cout<<"Enter breath="<<endl;
    cin>>n2;
    c1.setdata(n1,n2);
    c1.showdata();
}
