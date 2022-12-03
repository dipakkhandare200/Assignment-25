// Define a class ReverseNumber and define an instance member function to find
//Reverse of a Number using class
#include<iostream>
using namespace std;
class ReverseNumber
{
private:
    int a1;
public:
    void setdata(int x)
    {
        a1=x;
    }
    void showdata()
    {
        int rev_num=0;
        while(a1>0)
        {
            rev_num=rev_num*10+a1%10;
            a1=a1/10;
        }
        cout<<"reverse number="<<rev_num<<endl;
        }
};
int main()
{
    int n1;
    ReverseNumber c1;
    cout<<"enter positive number"<<endl;
    cin>>n1;
    c1.setdata(n1);
    c1.showdata();

}
