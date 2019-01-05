#include <bits/stdc++.h>
using namespace std;

int w, h, u, d, ar[200];

int main() {
	cin >> w >> h;
	for (int i = 0; i < 2; i++) {
		cin >> u >> d;
		ar[d] = u;
	}
	for (int i = h; i > 0; i--) {
		w += i;
		w = max(w-ar[i], 0);
	}
	cout << w << "\n";
	return 0;
}