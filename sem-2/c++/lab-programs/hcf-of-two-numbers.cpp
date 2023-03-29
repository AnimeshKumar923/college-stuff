#include<iostream>
// WAP to find the hcf of two numbers.
using namespace std;

int main() {
    int num1;
    int num2;
    int HCF;

    cout<<"Enter first number = ";
    cin>>num1;
    cout<<"Enter second number = ";
    cin>>num2;

    int temp;
    if(num1<num2)
    {
        temp = num1;
        HCF = num2;
    }
    else 
    {
        temp = num2;
        HCF = num1;
    }

    for(int i = temp ; i >= 1 ; i--)
    {
        if(num1 % i == 0 && num2 % i == 0)
        {
            HCF = i;
            break;
        }
    }

    cout<<"HCF = "<<HCF<<endl;

    return 0;
}
