#include <bits/stdc++.h>
using namespace std;
#define LL long long
// function to count the divisors
LL countDivisors(LL n)
{
	LL cnt = 0;
	for (LL i = 1; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			// If divisors are equal,
			// count only one
			if (n / i == i)
				cnt++;

			else // Otherwise count both
				cnt = cnt + 2;
		}
	}
	return cnt;
}

/* Driver program to test above function */
int main()
{
	LL n; cin>>n;
			  cout<< countDivisors(n) <<endl;;
	return 0;
}