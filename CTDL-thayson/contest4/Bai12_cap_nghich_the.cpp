//Code by Keyboard hero
#include <iostream>
using namespace std;
#define ll long long

ll merge(ll a[], ll l, ll m, ll r) {
	ll n1 = m - l + 1;
	ll n2 = r - m;
	ll* L = new ll[n1];
	ll* R = new ll[n2];

	for (ll i = 0; i < n1; i++) {
		L[i] = a[l + i];
	}
	for (ll i = 0; i < n2; i++) {
		R[i] = a[m + 1 + i];
	}
	ll i = 0; ll j = 0; ll k = l;
	ll count = 0;

	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			a[k] = L[i];
			i++; k++;
		}
		else {
			a[k] = R[j];
			j++; k++;
			count += n1 - i;
		}
	}

	while (i < n1) {
		a[k] = L[i];
		i++; k++;
	}
	while (j < n2) {
		a[k] = R[j];
		j++; k++;
	}
	delete[]L;
	delete[]R;
	return count;
}


ll mergeSort(ll a[], ll l, ll r) {
	ll count = 0;
	if (l < r) {
		int m = (l + r) / 2;
		count += mergeSort(a, l, m);
		count += mergeSort(a, m + 1, r);
		count += merge(a, l, m, r);
	}
	return count;
}


int main(){
	int t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		ll* a = new ll[n];
		for (ll i = 0; i < n; i++) {
			cin >> a[i];
		}
		cout << mergeSort(a, 0, n - 1) << endl;
		delete[]a;
	}
	return 0;
}
    