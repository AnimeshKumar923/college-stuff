/*

Alice and Bob are best friends who share almost the same perspective, except for one topic: "Which is better: a touchscreen phone or a non-touchscreen phone?" Bob is a firm believer in the superiority of touchscreens, while Alice prefers keypad phones. In a bid to prove his point, Bob challenges Alice to a typing speed competition. He provides Alice with a string and asks her to determine how long it would take to type the given string using a keypad phone.
Alice's phone has a keypad with the following layout:
| 1 | 2 | 3 |
| 4 | 5 | 6 |
| 7 | 8 | 9 |
| * | 0 | # |

Better layout

image

To type a single character, Alice must press the corresponding button on the keypad the required number of times. For example, to type the character 'a', Alice would have to press the button '2' once; to type the character 'c', she would have to press the button '2' three times.

Note - Time is equal to the sum of total number of keypad press. His phone looks something like the given image.

Input Format

    The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
    The first line of each test case contain a string.

Constraints

    1 <= t <= 109
    1 <= string <= 231-1

Output Format

For each test case, print total time taken by Alice.

Sample Input 0

2
abc
abcdef

Sample Output 0

6
12

Explanation 0

    For a press "2" one time, press "2" two times for b and press "2" for three times. So total sum is 1 + 2 + 3 = 6
    For a press "2" one time, press "2" two times for b and press "2" for three times, press "3" one time for d, press "3" two times for e and press "3" three times for f. So total sum is 1 + 2 + 3 + 1 + 2 + 3 = 12.



*/

#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int typing_time(string s)
{
    // Dictionary mapping each character to its keypad button and the number of times it needs to be pressed
    unordered_map<char, pair<char, int>>
        kpad = {
            {'a', {'2', 1}}, {'b', {'2', 2}}, {'c', {'2', 3}}, {'d', {'3', 1}}, {'e', {'3', 2}}, {'f', {'3', 3}}, {'g', {'4', 1}}, {'h', {'4', 2}}, {'i', {'4', 3}}, {'j', {'5', 1}}, {'k', {'5', 2}}, {'l', {'5', 3}}, {'m', {'6', 1}}, {'n', {'6', 2}}, {'o', {'6', 3}}, {'p', {'7', 1}}, {'q', {'7', 2}}, {'r', {'7', 3}}, {'s', {'7', 4}}, {'t', {'8', 1}}, {'u', {'8', 2}}, {'v', {'8', 3}}, {'w', {'9', 1}}, {'x', {'9', 2}}, {'y', {'9', 3}}, {'z', {'9', 4}}};
    int total_presses = 0;
    for (char c : s)
    {
        auto button = kpad[c].first;
        auto num_presses = kpad[c].second;
        total_presses += num_presses;
    }
    return total_presses;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << typing_time(s) << endl;
    }
    return 0;
}