/*

Aim: - Program to demonstrate the unary operator overloading for operator ++. Make a class test. 
Create a default constructor to initialize the variable. 
1) Overload operator ++ (Pre) with definition to pre-increment the value of a variable 
2) Overload operator ++ (post) with definition to post- increment the value of variable.

*/


#include <iostream>
using namespace std;

class test{
protected:
  int num;
public:
  test(){
    num=0;
  }

  test(int n){
    num=n;
  }

void disp(){
  cout<<"Number = "<<num<<endl;
}

test operator ++(){
  ++num;
  return test(num);
}

test operator ++(int){
  test t(num);
  ++num;
  return t;
}
};

int main() {
  test t1(1), t2(1), t3;

  ++t1;
  t1.disp();

  t2++;
  t2.disp();

  t3.disp();

  t3=t2++;
  t2.disp();
  t3.disp();
  return 0;
}
