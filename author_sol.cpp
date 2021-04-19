#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long n;
		cin >> n;
		// the only numbers that have no ODD divisors are those numbers that are powers of 2
		// check if the MSB (most significant bit) of a number is equal to the MSB of (number - 1)
		// if 'n' = 4 and ('n' - 1) == 3, then we can see:
		// 4 = 100
		// 3 = 011
		// they have different MSBs, therefore, 'n' is a power of 2 (it has no odd divisors)
		// otherwise, as long as the number is not a power of 2, then the answer is "YES"
		cout << ((n & (n - 1)) ? "YES" : "NO") << '\n';
	}
	return 0;
}
