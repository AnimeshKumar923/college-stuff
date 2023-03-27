/*

WAP to illustrate how the constructors are implemented and the order in which
they are called when the classes are inherited.

Use three classes named alpha, beta, gamma such that alpha, beta are base class
and gamma is derived class inheriting alpha &beta.

Pass four variable to gamma class object which will further send one integer
variable to alpha(),one float type variable to beta().

Show the order of execution by invoking constructor of derived class.

*/

#include <iostream>
using namespace std;

class alpha {

protected:
  int a;

public:
  alpha(int x) {
    // cout<<"Enter value of a: ";
    a = x;
    cout << "alpha intialized";
  }

  void disp() { 
    cout << "a = " << a; 
  }
};

class beta {
protected:
  int b;

public:
  beta(float y) {
    b = y;
    cout << "b initialized";
  }
  void disp() { 
    cout << "b = " << b; 
  }
};

class gamma:public alpha, public beta{
protected:
  int x,y;
public:
  gamma(int a, float b, int c, int d):alpha(a),beta(b){
    x=c;
    y=d;
    cout<<"gamma initialized";
  }

void disp(){
  cout<<"x = "<<x<<endl;
  cout<<"y = "<<y<<endl;
}
};

int main() {
  gamma x1;
  x1.disp();
}
