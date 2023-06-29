/*

Digital root calculation

Alice and Bob are best friends and they love mathematics. Their teacher gave them a problem to find the digital root of a number. He gave an integer number A to Alice and another integer B to Bob.

Alice and Bob are asked to work together and find the digital root of AB.

The digital root of a number is the sum of all its digits until we get a single digit. For example, the digital root of 5674 is the same as the digital root of 5 + 6 + 7 + 4, which is 22. Since 22 is not a single digit number, we continue adding its digits until we get a single digit: 2 + 2 = 4. Therefore, the digital root of 5674 is 4.

Alice and Bob have one more class. So, help them out.

Input Format

    First line contains an integer A, denoting number given to Alice.
    Second line contains an integer B, denoting number given to Bob.

Constraints

    1 ≤ A ≤ 10105
    1 ≤ B ≤ 10105

Output Format

Print the digital root of AB.

Sample Input 0

2
11

Sample Output 0

5

Sample Input 1

2
7

Sample Output 1

2



*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iostream>
using namespace std;

int dig_root(int num)
{
    while (num > 9)
    {
        int sum = 0;
        while (num > 0)
        {
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }
    return num;
}

int main()
{
    int A, B;
    cin >> A >> B;

    int pow = 1;
    for (int i = 0; i < B; i++)
    {
        pow *= A;
        pow = dig_root(pow);
    }

    cout << pow << endl;

    return 0;
}