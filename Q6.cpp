// Define a class Square to find the square of a number and write a C++ program to Count number of times a function is called.
#include<iostream>
using namespace std;
class Square
{
private:
    int a1;
public:
    void setdata(int x)
    {
        a1=x*x;
    }
    void showdata()
    {

        cout<<"Square of Enter number ="<<a1<<endl;
        }
};
int main()
{
    int n1;
    Square c1;
    cout<<"enter positive number"<<endl;
    cin>>n1;
    c1.setdata(n1);
    c1.showdata();

}
