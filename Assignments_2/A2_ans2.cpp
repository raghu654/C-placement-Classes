// Program to find Reverse of a Number using class


#include<iostream>
using namespace std;

class Reverse
{
private:
    int n;
public:
    void function();
};

void Reverse::function()
{
    int rev, rem;
    cout<<"Enter a number : ";
    cin>>n; 
    while (n != 0)
    {
    rem = n%10;
    rev = rev * 10 + rem;
    n = n/10;
    }
    cout<<"Reversed number is : "<<rev;
}

int main()
{
    Reverse obj;
    obj.function();
    return 0;
}