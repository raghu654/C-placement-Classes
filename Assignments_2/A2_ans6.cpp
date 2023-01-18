#include<iostream>
using namespace std;

class Num
{
    public:
    int n;
    void fun();
};

void Num :: fun(){
    cout<<"Enter the value of n : ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cout<<i<<" ";
    }
    
}

int main()
{
    Num a;
    a.fun();
    return 0;
}