// WAP to find area of rectangle using constructor overloading. Also define destructor to delete the memory allocated to objects.


#include <iostream>
using namespace std;

class rect{
    int length;
    int breadth;
    int area;
    
    public:
    rect(){
        length=40;
        breadth=50;
    }
    
    rect(int l, int b){
        length=l;
        breadth=b;
    }
    
    void CalcArea(){
        int result;
        result=length*breadth;
    }
    
    void disp(){
        int result;
        cout<<result;
    }
    
    ~rect();
};

rect::~rect(){
    cout<<endl<<"\n\nObject destroyed"<<endl;
}



int main() {
    // Write C++ code here
    rect x1;
    
    int l,b;
    x1.CalcArea();
    x1.disp();
    
    cout<<endl<<"Enter length and breadth of rectangle: ";
    cin>>l>>b;
    
    rect x2(l,b);
    x2.CalcArea();
    x2.disp();
    
    // cout<<"Enter length: "<<endl;
    // cin>>len;
    
    // cout<<"Enter breadth: "<<endl;
    // cin>>bre;
    

    return 0;
}
