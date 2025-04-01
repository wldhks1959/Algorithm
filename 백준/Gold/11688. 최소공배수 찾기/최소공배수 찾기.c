#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define ll long long 

ll gcd(ll a, ll b)
{
	ll tmp;
	while (b != 0)
	{
		tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}

ll lcm(ll a, ll b)
{
	return (a / gcd(a, b)) * b;
}

ll comp(const void* a, const void* b)
{
	return (*(ll*)a - *(ll*)b);
}

int main()
{
    ll a, b, L;
    scanf("%lld %lld %lld", &a, &b, &L);

    ll lab = lcm(a, b);

    // L을 lab로 나눈 몫 k
    ll k = L / lab;
    ll c = -1; 

    if (L % lab != 0)
    {
        printf("-1");
    }
    else
    {
        ll* div = (ll*)malloc(sizeof(ll) * 100000);
        int idx = 0; // 약수의 개수

        // lab의 모든 약수 구하기
        for (ll i = 1; i <= sqrt(lab); i++)
        {
            if (lab % i == 0) 
            {
                div[idx++] = i; 
                if (i != lab / i) 
                    div[idx++] = lab / i;
            }
        }

        // sort
        qsort(div, idx, sizeof(ll), comp);

        int isFound = 0; 
        for (int i = 0; i < idx; i++)
        {
            c = k * div[i]; // c는 k와 약수 v[i]의 곱
            ll gcd_lab_c = gcd(lab, c);

            if (gcd_lab_c == div[i])
            {
                isFound = 1;
                break; 
            }
        }

        if (isFound == 0) printf("-1");
        else printf("%lld", c);

        free(div);
    }
    return 0;
}