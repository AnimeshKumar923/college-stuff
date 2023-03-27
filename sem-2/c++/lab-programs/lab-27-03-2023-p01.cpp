/*

Create a class student having student uid and getnumber(),putnumber() as member
functions to get the values and display it.

Derive a class test having marks in different subjects and getmarks() and
putmarks() as member functions to get and display the values.

Derive another class sports from student class having sports score and
getscore(), putscore() as member functions to get and display the values.

Derive a class result from test and sports class and define a function display()
to calculate total marks.

Implement it with the object of result class. If it gives any error, resolve it
by adding the required functionality.

*/

#include <iostream>
using namespace std;

class student {
protected:
  int uid;

public:
  void getNumber() {
    cout << "Enter your UID: ";
    cin >> uid;
  }

  void putNumber() { cout << "Your UID = " << uid << endl; }
};

class test : public virtual student {
protected:
  int sub1, sub2, sub3;

public:
  void getMarks() {
    // getNumber();
    cout << "Enter marks for sub1: ";
    cin >> sub1;
    cout << "Enter marks for sub2: ";
    cin >> sub2;
    cout << "Enter marks for sub3: ";
    cin >> sub3;
  }

  void putMarks() {
    cout << "Your sub1 marks = " << sub1 << endl;
    cout << "Your sub2 marks = " << sub2 << endl;
    cout << "Your sub3 marks = " << sub3 << endl;
  }
};

class sports : public virtual student {
protected:
  int score;

public:
  void getScore() {
    cout << "Enter your score: ";
    cin >> score;
  }
  void putScore() { cout << "Your sports score = " << score << endl; }
};

class result : public test, public sports {

protected:
  int result=0;

public:
  void display(){
    result=sub1+sub2+sub3+score;
    cout<<"Total marks = "<<result<<endl;
  }
};

int main() {
  result x1;
  x1.getNumber();
  x1.putNumber();
  x1.getMarks();
  x1.putMarks();
  x1.getScore();
  x1.putScore();
  x1.display();

  return 0;
}
