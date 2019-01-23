/*VS自造的随机数 目标：看懂！！！！！



#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <string>
#include <math.h>
#include <string.h>
#define ll long long
#define mod 10000000033
#define MAX 40000
#define S 0
#define N 100
using namespace std;
ll p[MAX];
ll prime[MAX];
ll k;
void init()
{
	k = 1;
	memset(p, 0, sizeof(p));
	for (int i = 2; i < MAX; i++)
	{
		if (!p[i])
		{
			for (int j = i + i; j < MAX; j += i)
			{
				p[j]++;
			}
			prime[k] = i;
			k++;
		}
	}
}
ll quickpow(ll n, ll a)
{
	ll ans = 1;
	while (a >= 1)
	{
		if (a & 1)
			ans = n * ans;
		a = a >> 1;
		n = n * n;
	}
	return ans;
}
ll pr[MAX];
ll num[MAX];
int main()
{
	init();
	int t;
	cin >> t;
	while (t--)
	{
		ll n;
		scanf("%lld", &n);
		if (n == 0)
		{
			printf("0\n");
			continue;
		}
		memset(pr, 0, sizeof(pr));
		memset(num, 0, sizeof(num));
		ll cnt = 1;
		for (ll i = 1; i <= k - 1; i++)
		{
			if (prime[i] > n)
				break;
			if (n%prime[i] == 0)
			{
				pr[cnt] = prime[i];
				while (1)
				{
					n /= prime[i];
					num[cnt]++;
					if (n%prime[i] != 0)
						break;
				}
				cnt++;
			}
		}
		pr[cnt] = n;
		num[cnt] = 1;
		ll ans = 1;
		for (int i = 1; i <= cnt; i++)
		{
			if (pr[i] == 1)
				continue;
			ans *= (pow(pr[i], num[i] + 1) - 1) / (pr[i] - 1);
		}
		printf("%lld\n", ans);
	}
	system("pause");
	return 0;
}*/
#include<iostream>
using namespace std;

const int size ;
int main() {
	int array[size] = { };
	for (int i = 0; i < 20; ++i)
	{
		array[i] = 100;
	}
	for (int i = 0; i < 20; ++i)
	{
		cout << array[i] <<endl;
	}
	system("pause");
}