// AIM: - WAP to access members  using pointer to object members.


#include<iostream>
using namespace std;

class Student{
    string name;
    int age;
    int UID;

    public:
    Student(){
        cout<<"Enter the name of the student = ";
        cin>>name;
        cout<<"Enter the age of the student = ";
        cin>>age;
        cout<<"Enter the UID of the student = ";
        cin>>UID;
    }

    void show()
    {
        cout<<"Name = "<<name<<endl;
        cout<<"Age = "<<age<<endl;
        cout<<"UID = "<<UID<<endl;
    }
};

int main() {
    Student *ptr;

    ptr = new Student;

    ptr->show();

    return 0;
}
