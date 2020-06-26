/*
    https://www.youtube.com/watch?v=wGmJatvjANY
    inoder :  4 2 5 1 3 6       L N R
    preoder : 1 2 4 5 3 6       N L R
    
    In :  4 2 5 nằm bên trái -1 là node - 3 6 bên phải
    Pre:  1 là node - 2 4 5 bên trái - 3 6 bên phải (dựa vào In)

    xét 2 4 5 : 2 là node - 4,5
    nhìn lên In (4 2 5)  2 là node thì 4 là left , 5 right
    tương tự là 3 node - 6 right

    cấy sẽ là 
            1
          /   \
        2       3
      /   \       \
    4       5       6    
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define X first
#define Y second
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int N = 1e3 + 5;

int n;
int inoder[N];
int preoder[N];
map <int,int> mp;
int pos_pre;

void PrintPostorder(int start,int end){
    if(start > end) return;
    int pos_in = mp[preoder[pos_pre++]];
    //cout << "trung 1: " << start << ' ' << pos_in << '\n';
    PrintPostorder(start, pos_in - 1);
    //cout << "2 trung: " << start << ' ' << pos_in << '\n';
    PrintPostorder(pos_in + 1, end);
    cout << inoder[pos_in] << ' ';
}

void solve(){
    cin >> n;
    mp.clear();
    pos_pre = 0;
    for(int i = 0 ; i < n ; i++)  cin >> inoder[i],mp[inoder[i]] = i;
    for(int i = 0 ; i < n ; i++)  cin >> preoder[i]; 
    PrintPostorder(0,n -1);
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)