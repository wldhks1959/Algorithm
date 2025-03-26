#include <stdio.h>

long long a, b, c;

long long mod_exp(long long base, long long exp, long long mod)
{
	long long result = 1;
	base = base % mod;

	while (exp > 0)
	{
		// exp%2==1이면 홀수 
		if (exp & 1)
			result = (result * base) % mod;

		// base update
		base = (base * base) % mod;

		exp >>= 1;
	}
	return result;
}

int main(void)
{
	scanf("%lld %lld %lld", &a, &b, &c);
	printf("%lld", mod_exp(a,b,c));

	return 0;
}