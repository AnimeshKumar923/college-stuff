/*

AIM: - WAP to create a class that will maintain the records of person with details Name and Age) and find the eldest among them. The program must use this pointer to return the result by overloading> operator among two objects.



#include <iostream>
using namespace std;

class demo{
protected: 
  int a;
public:
  demo(int a){
    this->a=a;
  }

void disp(){
  cout<<a;
}
};

int main() {
demo *ptr;
  ptr=new demo(3);
  ptr->disp();
}

*/

#include <iostream>
using namespace std;

class record{
protected:
  string name;
  int age;

public:
  record(string name, int age){
    this->age=age;
    this->name=name;
  }

void disp(){
  cout<<"Name: "<<name<<endl;
  cout<<"Age: "<<age<<endl;
}
};

int main(){
  record x1("Nig",32), x2("ng",52);
  x1.disp();
  x2.disp();
}
