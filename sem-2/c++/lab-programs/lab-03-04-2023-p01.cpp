/*

Experiment-2.2-a

AIM: -WAP to calculate and display cube of an integer and float variable using function overloading.

Operator overloading is a type of polymorphism in which an operator is overloaded to give user defined meaning to it. It is used to perform operation on user-defined data type.

The unary operators operate on a single operand and following are the examples of Unary operators −

The increment (++) and decrement (--) operators.

The unary minus (-) operator.

The logical not (!) operator.

The unary operators operate on the object for which they were called and normally, this operator appears on the left side of the object, as in !obj, -obj, and ++obj but sometime they can be used as postfix as well like obj++ or obj--.

*/


#include <iostream>
using namespace std;

class cube{
protected:
  int l;
  float b;
public:
  // void getData(){

  // }
  void calc(int);
  void calc(float);
};
void cube::calc(int a){
  cout<< a*a*a<<endl;
}
void cube::calc(float b){
  cout<< b*b*b<<endl;
}

int main() {
  int num;
  float f;
  
  cout<<"Enter integer number: ";
  cin>>num;
  
  cout<<"Enter float number: ";
  cin>>f;
  
  cube x1;
  x1.calc(num);
  x1.calc(f);
}
