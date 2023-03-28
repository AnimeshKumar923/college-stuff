// WAP to find area of rectangle using contructor overloading.

#include <iostream>
using namespace std;

class rect {

protected:
  int len, br;

public:
  rect() {
    len = 5;
    br = 10;
  }

  rect(int x, int y) {
    len = x;
    br = y;
  }

  void getData();

  void calcArea() {
    int area;
    area = len * br;
    cout << "area = " << area << endl;
  }
};

int main() {

  int x, y;
  cout << "Enter length: ";
  cin >> x;
  cout << "Enter breadth: ";
  cin >> y;

  rect x1(x, y);

  // x1.getData();
  x1.calcArea();

  rect x2;
  x2.calcArea();
  return 0;
}

void rect :: getData() {
  int x, y;
  cout << "Enter length: ";
  cin >> x;
  cout << "Enter breadth: ";
  cin >> y;
}
