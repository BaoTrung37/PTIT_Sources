/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define X first
#define Y second
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int N = 1e5 + 5;

int n;
struct Node{
    string data;
    Node *left;
    Node *right;
    Node(string s){
        data = s;
        left = right = NULL; 
    }
};
int Stoi(string s){
    int res = 0;
    if(s[0] != '-'){
        for(auto x : s){
            res = res*10 + (x - '0');
        }
    }
    else{
        for(int i = 1 ; i < s.length() ; i++){
            res = res*10 + s[i] - '0';
        }
        res *= -1;
    }
    return res;
}
int tongTree(Node *root){
    if(root == NULL) return 0;
    if(!root -> left && !root -> right)
        return Stoi(root -> data);
    int l = tongTree(root -> left);
    int r = tongTree(root -> right);
    if(root -> data == "+")
        return l + r;
    if(root -> data == "-")
        return l - r;
    if(root -> data == "*")
        return l * r;
    if(root -> data == "/")
        return l / r;    
}
bool check_kitu(string c){
    return (c == "+" || c == "-" || c== "*" || c == "/");
}
void solve(){
    int n;
    cin >> n;
    string s[n];
    for(int i = 0 ; i < n ; i++)     cin >> s[i];
    int p = 0;
    Node *root = new Node(s[p++]);
    queue <Node *> q;
    q.push(root);
    while(!q.empty()){
        Node *f = q.front(); q.pop();
        Node *l,*r;
        if(check_kitu(f -> data)){
            l = new Node(s[p++]);
            r = new Node(s[p++]);
            f -> left = l;
            f -> right = r;
            q.push(l);
            q.push(r);
        }
    }
    cout << tongTree(root) << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)