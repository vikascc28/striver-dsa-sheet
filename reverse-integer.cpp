// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

// Assume the environment does not allow you to store 64-bit integers (signed or unsigned).


// Example 1:

// Input: x = 123
// Output: 321
// Example 2:

// Input: x = -123
// Output: -321
// Example 3:

// Input: x = 120
// Output: 21

// Constraints:

// -231 <= x <= 231 - 1



#include <bits/stdc++.h>
using namespace std;

int main()
{}
    class Solution
    {
    public:
        int reverse(int x)
        {
            long long y;
            long long sum = 0;
            long long z = x;
            if (z < 0)
            {
                z = z * (-1);
                while (z > 0)
                {
                    y = z % 10;
                    sum = (sum * 10) + y;
                    z = z / 10;
                }
                sum = sum * (-1);
                if (sum < (pow(-2, 31)) || sum > (pow(2, 31) - 1))
                {
                    sum = 0;
                }
                return sum;
            }
            else
            {
                while (z > 0)
                {
                    y = z % 10;
                    sum = (sum * 10) + y;
                    z = z / 10;
                }
                if (sum < (pow(-2, 31)) || sum > (pow(2, 31) - 1))
                {
                    sum = 0;
                }
                return sum;
            }
        }
    };