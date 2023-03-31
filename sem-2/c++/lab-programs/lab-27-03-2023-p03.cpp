/*

WAP to illustrate how the constructors are implemented and the order in which
they are called when the classes are inherited.

Use three classes named alpha, beta, gamma such that alpha, beta are base class
and gamma is derived class inheriting alpha &beta.

Pass four variable to gamma class object which will further send one integer
variable to alpha(),one float type variable to beta().

Show the order of execution by invoking constructor of derived class.

Status: More work remaining...

*/

#include <iostream>
using namespace std;

class alpha
{

protected:
  int a;

public:
  alpha(int x)
  {
    // cout<<"Enter value of a: ";
    a = x;
    cout << "alpha initialized" << endl;
  }

  void disp()
  {
    cout << "a = " << a;
  }
};

class beta
{
protected:
  int b;

public:
  beta(float y)
  {
    b = y;
    cout << "beta initialized" << endl;
  }
  void disp()
  {
    cout << "b = " << b;
  }
};

class gamma : public alpha, public beta
{
protected:
  int x, y;

public:
  gamma(int a, float b, int c, int d) : alpha(a), beta(b)
  {
    x = c;
    y = d;
    cout << "gamma initialized" << endl;
  }

  void disp()
  {
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
  }
};

int main()
{
  int a, c, d;
  float b;
  cout << "Enter a: ";
  cin >> a;
  cout << "Enter b: ";
  cin >> b;
  cout << "Enter c: ";
  cin >> c;
  cout << "Enter d: ";
  cin >> d;

  gamma x1(a, c, b, d);
  x1.disp();
}
