// Factorial of number using class

#include<iostream>
using namespace std;
class Factorial
{
public:
    int n,f = 1;
    void calculate();
    void show();
};

void Factorial::calculate()
{
    cout<<"Enter the number : ";
    cin>>n;

    if(n == 0 || n == 1){
        f = 1;
    }
    else{
        for (int i = 1; i <= n; i++)
        {
            f = f * i;
        }
        
    }
}

void Factorial::show()
{
    cout<<"Factorial : "<<f;
}

int main(){

    Factorial obj;
    obj.calculate();
    obj.show();
    return 0;
}