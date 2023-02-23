// memory allocation and using arrays in OOPs

#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void intiCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(void)
{
    cout << "Enter ID of your item no" << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with ID " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{

    Shop a;
    a.intiCounter();
    int count;
    cout << "Enter no. of items: ";
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        a.setPrice();
    }

    a.displayPrice();

    return 0;
}