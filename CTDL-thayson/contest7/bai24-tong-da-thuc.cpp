/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

vector <pii> hs; 
string a,b;
bool cmp(pii a,pii b){
    return a.second > b.second;
}
int stringtoint(string s){
    int res = 0;
    for(auto z : s)
        res = res * 10 + (z - '0');
    return res;
}
void process(string s){
    string tmp = "";
    pii p;
    for(int i = 0 ; i < s.length() ; i++){
        if(isalnum(s[i])){
            tmp += s[i];
        }
        if(s[i] == '*'){
            p.first = stringtoint(tmp);
            tmp = "";
        }
        if(s[i] == '+' || i == s.length() - 1){
            p.second = stringtoint(tmp);
            hs.push_back(p);
            tmp ="";
        }
    }
}
void solve(){
    hs.clear();
    getline(cin,a);getline(cin,b);
    process(a); process(b);
    sort(all(hs),cmp);
    for(int i = 0 ; i < hs.size() ; i++){
        
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    cin.ignore();
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)