/*

Experiment-2.2-a

AIM: -WAP to calculate and display cube of an integer and float variable using function overloading.

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
