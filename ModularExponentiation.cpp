#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
	// Write your code here.
	if (n == 0) return 1;
	long long s = (modularExponentiation(x, n / 2, m)) % m;
	long long ans = (s * s) % m;
	if (n % 2) ans = (ans * x) % m;
	return (ans) % m;
}
