/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n;
string s;
void solve(){
    cin >> n;
    cin.ignore();
    vector <ii> a;
    for(int i = 1 ; i <= n ; i++){
        getline(cin,s);
        istringstream s_cin (s);
        int j;
        while(s_cin >> j){
            if(i < j) a.push_back({i,j});
        }
    }
    for(auto z : a){
        cout << z.first << ' ' << z.second << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)




//  for(int i = 0 ; i < s.length() ; i++){
//             if(('1' <= s[i] && s[i] <= '9') && ('0' <= s[i + 1] && s[i + 1] <= '9')){
//                 int x = 10 * (s[i] - '0') + (s[i + 1] - '0');
//                 if(j < x) a.push_back({j,x});
//                 i++;
//             }  
//             else if(s[i] >= '1' && s[i] <= (n + '0')){
//                 if(j < s[i] - '0')
//                     a.push_back({j,s[i] - '0'});
//             } 
//         }