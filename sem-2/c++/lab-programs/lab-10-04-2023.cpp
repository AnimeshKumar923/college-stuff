#include <iostream>
using namespace std;

class operation{
protected:
  int num;
public:
  operation(){
    cout<<"Enter number: ";
    cin>>num;
  }

int operator -(operation obj){
  int result;
  result=num-obj.num;
  return result;
}
void operator ++(int){
  num++;
}
void incNumDisp(){
  cout<<"Incremented Number = "<<num<<endl;
}
};

int main() {
  operation x1,x2,x3;

  int diff=x1-x2;
  cout<<"DIfference of x1 and x2 = "<<diff<<endl;

  x3++;
  x3.incNumDisp();

  x2++;
  x2.incNumDisp();

  x1++;
  x1.incNumDisp();

  return 0;
}
