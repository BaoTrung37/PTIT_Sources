/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;


struct so{
	int s,sl;
};
bool dk(so a,so b){
	if(a.sl!=b.sl) return a.sl>b.sl;
	else return a.s<b.s;
}
int n;

void solve(){
	cin >> n;
    so ds[n+1];
	int d = 0;
	for(int i = 1 ; i <= n ;i ++){
		int t1, kt = 0;
		cin >> t1;
		for(int j = 1 ; j <= d ; j++){
			if(t1 == ds[j].s){
				kt = j;
				break;
			}
		}
		if(kt == 0){
			ds[++d].s = t1;
			ds[d].sl = 1;
		}
		else{
			++ds[kt].sl;
		}
	}
	sort(ds + 1, ds + d + 1, dk);
	for(int i = 1 ; i <= d ; i++){
		for(int j = 1 ; j <= ds[i].sl ; j++) cout << ds[i].s << " ";
	}
	cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)











// int n;
// bool cmp(map <int,int> a, map <int,int>b){
//     if(a.second == b.second)
//         return a.first < b.first;
//     return a.second > b.second;
// }
// void solve(){
//     cin >> n;
//     set_vect(a,n);
//     map<int,int> mp;
//     for(int i = 0 ; i < n ; i++){
//         mp[a[i]]++;
//     } 
//     map <int,int>::iterator it;
//     sort(all(mp),cmp);
//     for(it = mp.begin() ; it != mp.end() ; it++){
//         while((it -> second) --){
//             cout << it ->first << ' ';
//         } 
//     }
//     cout << '\n';
// }