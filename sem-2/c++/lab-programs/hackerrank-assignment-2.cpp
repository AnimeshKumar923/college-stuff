/*

Byteland Population Growth

In the enchanted land of Byteland, there are three types of citizens: Bit, Nibble, and Byte. Each citizen grows into a different type of citizen after a certain amount of time has passed since they first appeared. Specifically:

    a Bit - 2ms after a Bit appears, it grows up and becomes a Nibble (i.e. it disappears and a Nibble appears)

    a Nibble - 8ms after a Nibble appears, it grows up and becomes a Byte

    a Byte - 16ms after a Byte appears, it grows up, splits into two Bits and disappears

Alice wants to know if only one Bit appears at time 0 milliseconds, what would the population of Byteland be immediately before the time N milliseconds?

Unfortunately, she is not good in Mathematics. So, asking your help. Please help her out.

Input Format

    The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
    The first and only line of each test case contains a single integer N

Constraints

    1 ≤ T ≤ 104
    1 ≤ N ≤ 1,600

Output Format

For each test case, print a single line containing three space-separated integers — the number of Bits, Nibbles and Bytes.

Sample Input 0

2
2
3

Sample Output 0

1 0 0
0 1 0

Explanation 0

Immediately before the time 2ms, there is only one Bit. At 2ms, this Bit grows up, so immediately before 3ms, there is only one Nibble in Byteland.


*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        long long int bit = 1, nibble = 0, byte = 0, c = 0, t;
        cin >> t;
        while (t--)
        {
            if (c == 2)
            {
                nibble = bit;
                bit = 0;
            }
            if (c == 10)
            {
                byte = nibble;
                nibble = 0;
            }
            if (c == 26)
            {
                bit = byte * 2;
                byte = 0;
                c = 0;
            }
            c++;
        }
        cout << bit << "\t" << nibble << "\t" << byte << "\n";
    }
    return 0;
}