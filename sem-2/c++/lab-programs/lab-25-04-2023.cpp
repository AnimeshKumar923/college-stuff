/*

Aim: - WAP to design a class representing the information regarding digital
library (books, tape: book & tape should be separate classes having the base
class as media).The class should have the functionality for adding new item,
issuing, deposit etc. The program should link the objects with concerned
function by the concept of runtime polymorphism

*/

#include <iostream>
#include <string.h>
using namespace std;

class media{
protected:
  char title[30];
  float price;

public:
  media(char* s, float p){
    strcpy(title,s);
    price=p;
  }

virtual void disp(){}
};

class book:public media{
int pages;
public:
  book(char* s, float a, int p):media(s,a){
    pages=p;
  }

void disp();
};

class tape:public media{
float time;
public:
  tape(char* s, float a, float t):media(s,a){
    time=t;
  }

void disp();
};

void book::disp(){
  cout<<"\nTitle: "<<title;
  cout<<"\nPages: "<<pages;
  cout<<"\nPrice: "<<price;
}

void tape::disp(){
  cout<<"\nTitle: "<<title;
  cout<<"\nPlay-time: "<<time<<" mins";
  cout<<"\nPrice: "<<price;
}

int main() {
  char* title=new char[30];
  float price,time;
  int pages;

  cout<<"\nEnter book details: \n";
  cout<<"\nTitle: ";
  cin>>title;
  cout<<"\nPrice: ";
  cin>>price;
  cout<<"\nPages: ";
  cin>>pages;

  media* ptr1;
  ptr1=new book(title,price,pages);
  
  // book b1(title,price,pages);

  cout<<"\nEnter Tape details: \n";
  cout<<"\nTitle: ";
  cin>>title;
  cout<<"\nPrice: ";
  cin>>price;
  cout<<"\nPlay-time(mins): ";
  cin>>time;
  // tape t1(title,price,time);
  
  media* ptr2;
  ptr2=new tape(title,price,time);
  
  ptr1->disp();
  ptr2->disp();
}
