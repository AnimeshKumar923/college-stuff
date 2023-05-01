/*AIM: - WAP to create a class that will maintain the records of person with details Name and Age) and find the eldest among them. The program must use this pointer to return the result by overloading> operator among two objects.*/

#include <iostream>
using namespace std;

class Records
{
    int age;
    string name;

public:
    Records() {}
    void input(string name_temp, int age_temp)
    {
        name = name_temp;
        age  = age_temp;
    }

    Records Eldest(Records obj)
    {
        if (age > obj.age)
        {
            return *this;
        }
        else
        {
            return obj;
        }
    }

    void show()
    {
        cout << "The Eldest Member : " << endl
             << "Name = " << name << endl
             << "Age = " << age;
    }
};

int main()
{
    int num;
    cout << "Enter number of members = ";
    cin >> num;

    Records Member[num];

    for (int i = 0; i < num; i++)
    {
        string name;
        int age;

        cout << "Enter the name of " << i+1 << " member = ";
        cin >> name;
        cout << "Enter the age of " << i+1 << " member = ";
        cin >> age;
        
        Member[i].input(name,age);
    }

    Records Eldest_member;

    for (int i = 0; i < num - 1; i++)
    {
        Eldest_member = Member[i].Eldest(Member[i + 1]);
    }

    Eldest_member.show();

        return 0;
}
