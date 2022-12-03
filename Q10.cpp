// Define a class Area and define instance member functions to find the area of the different shapes like square, rectangle , circle etc.
#include<iostream>
using namespace std;
class  Area
{
private:
    float a,b;
    float Areacircle, Areasqaure, Arearectangle;
public:
    void setcircle(float x)
    {
        a=x;
      Areacircle=a*a*3.14;
    }
    void setsquare(float x)
    {  a=x;
      Areasqaure=a*a;
    }
    void setrectangle(float x,float y)
    {  a=x;
       b=y;
      Arearectangle=a*b;
    }
    void showdata()
    {

        cout<<"Area of circle="<<Areacircle<<endl;
        cout<<"Area of square="<<Areasqaure<<endl;
        cout<<"Area of rectangle="<<Arearectangle<<endl;

}
};
int main()
{
    float n1,n2,n3,n4;
Area c1;
    cout<<"Enter Radius of circle="<<endl;
    cin>>n1;
    cout<<"Enter side of square="<<endl;
    cin>>n2;
    cout<<"Enter length & breath of rectangle="<<endl;
    cin>>n3>>n4;
    c1.setcircle(n1);
    c1.setsquare(n2);
    c1.setrectangle(n3,n4);
    c1.showdata();
}
