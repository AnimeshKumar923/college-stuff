  // WAP to calculate sum of marks of n students of a class inputted via dynamic memory allocation

#include <iostream>
using namespace std;

class Student{
protected:
  int length;
  int* marks;
  // int* sum=new int;
int sum=0;
public:
// int i;
  void get();
  void calcSum();
  void disp();
};

void Student::get(){
  cout<<"Enter number of students ";
  cin>>length;

  marks=new int[length];

  for(int i=0; i<length; i++){
  cout<<"Enter marks of student "<<i+1<<": ";
  cin>>*(marks+i);
  }
}

void Student::calcSum(){
  for(int i=0; i<length; i++){
    sum=sum+*(marks+i);
  }
}

void Student::disp(){
  for(int i=0; i<length; i++){
    cout<<"Marks of student "<<i+1<<"= "<<*(marks+i)<<endl;
  }
  cout<<"Sum = "<<sum;
}

int main() {

  Student x1;
  x1.get();
  x1.calcSum();
  x1.disp();

  
}
  // pointer-variable = new data-type;

  // Release memory pointed by pointer-variable
// delete pointer-variable;  

// testing code
//   int* ptr=new int;
//   cout<<"Value of ptr = "<<ptr<<endl;
//   cout<<"Enter value of ptr: ";
//   cin>>*ptr;
//   cout<<*ptr<<endl;
//   delete ptr;
