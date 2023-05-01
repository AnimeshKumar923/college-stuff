#include <iostream>
using namespace std;

int main() {
  int a,b;
  cout<<"Enter first number: ";
  cin>>a;

  cout<<"Enter second number: ";
  cin>>b;

  try{
    if(b==0)
      throw "you can't divide by zero\n";

    if(b==1)
      throw "enter second value other than 1\n";

    cout<<"Division = "<<a/b;
  }


  catch(const char* s){
    cerr<<s;
  }

  catch(const int s){
    cerr<<s;
  }
}
