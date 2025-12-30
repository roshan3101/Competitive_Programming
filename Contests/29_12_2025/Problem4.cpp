#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

static const long long MOD = 998244353;

long long fact[55];

int main() {
	fact[0] = 1;
	for (int i = 1; i <= 50; i++)
		fact[i] = fact[i - 1] * i % MOD;

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<long long> a(n + 1);
		for (int i = 0; i <= n; i++) cin >> a[i];

		long long a0 = a[0];
		vector<long long> b;
		for (int i = 1; i <= n; i++) b.push_back(a[i]);
		sort(b.begin(), b.end());

		long long sum = 0;
		bool ok = true;
		for (int i = 0; i < n; i++) {
			sum += b[i];
			if (sum + a0 < i + 1) {
				ok = false;
				break;
			}
		}

		if (!ok) {
			cout << 0 << '\n';
			continue;
		}

		long long ans = 1;
		long long available = a0;

		for (int i = 0; i < n; i++) {
			long long choices = available + b[i] - i;
			ans = ans * choices % MOD;
		}

		cout << ans << '\n';
	}
	return 0;
}
