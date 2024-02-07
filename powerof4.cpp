//Ques:- Power of 4 (leetcodeQuestion)
#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <cmath>
using namespace std;

bool isPowerOfFour(int n)
{
    if (n == 1)
    {
        return true;
    }

    if (n <= 0 || n % 4 != 0)
    {
        return false;
    }
    return isPowerOfFour(n / 4);
}
int main()
{
    int n;
    cin>>n;
    cout<<isPowerOfFour(n);
    return 0;
}