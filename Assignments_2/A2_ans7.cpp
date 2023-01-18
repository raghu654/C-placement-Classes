#include <iostream>

using namespace std;

class Swap
{
    

public:
    int a, b;
    void getdata();
    void swapv();
    void display();
};

void Swap :: getdata()
{
    cout <<"Enter two numbers :";
    cin >> a >> b;
}

void Swap :: swapv()
{
    a = a + b;
    b = a - b;
    a = a - b;
}

void Swap :: display()
{
    cout <<"a = "<< a <<" b = "<< b;
}

int main()
{

    Swap s;

    s.getdata();
    cout <<"Before swap : "<< endl;
    s.display();
    cout<<endl;
    s.swapv();
    cout <<"After swap : "<< endl   ;
    s.display();

    return 0;
}