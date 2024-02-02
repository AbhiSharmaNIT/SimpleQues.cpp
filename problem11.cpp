#include<iostream>
#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<cmath>
using namespace std;

int countDigitOne(int n)
{
    int countr = 0;
    for (int i = 1; i <= n; i++)
    {
        string str = to_string(i);
        countr = countr + count(str.begin(),str.end(),'1');
    }
    return countr;
}
int main()
{
	int n;
    cin>>n;

    cout<<countDigitOne(n);
	return 0;
}
