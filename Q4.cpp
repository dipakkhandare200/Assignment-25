//Define a class LargestNumber and define an instance member function to find the
//Largest of three Numbers using the class
#include<iostream>
using namespace std;
class LargestNumber
{
private:
    int a1,a2,a3;
public:
    void setdata(int x,int y,int z)
    {
        a1=x;
        a2=y;
        a3=z;
    }
    void showdata()
    {
        if((a1>a2)&&(a1>a3))
        cout<<"1st number is greater than 2nd  & 3rd="<<a1<<endl;
        else if((a2>a3)&&(a2>a1))
        cout<<"2nd number is greater than 1st & 3rd="<<a2<<endl;
        else if((a3>a2)&&(a3>a1))
        cout<<"3rd number is greater than 2nd & 1st="<<a3<<endl;

    }
};
int main()
{
    int n1,n2,n3;
    LargestNumber c1,c2;
    cout<<"enter 1st  positive number"<<endl;
    cin>>n1;
    cout<<"enter 2nd  positive number"<<endl;
    cin>>n2;
    cout<<"enter 3rd positive number"<<endl;
    cin>>n3;
    c1.setdata(n1,n2,n3);
    c1.showdata();

}
