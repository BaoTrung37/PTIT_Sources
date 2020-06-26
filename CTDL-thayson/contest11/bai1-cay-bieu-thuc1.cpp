/*
https://www.geeksforgeeks.org/expression-tree/
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define X first
#define Y second
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int N = 1e4 + 5;

string s;
struct Node{
    char data;
    Node* left;
    Node* right;
};

Node *TaoNode(char x){
    Node *p = new Node;
    p -> data = x;
    p -> left = p -> right = NULL;
    return p;
}

bool check_kitu(char c){
    return (c == '+' || c == '-' || c== '*' || c == '/');
}
Node *Tree(string s){
    stack <Node *> st;
    Node *t,*t1,*t2;
    for(int i = 0 ; i < s.length(); i++){
        if(!check_kitu(s[i])){
            t = TaoNode(s[i]);
            st.push(t);
        }
        else{
            t = TaoNode(s[i]);
            t1 = st.top();st.pop();
            t2 = st.top();st.pop();
            t -> right = t1;
            t -> left = t2;
            st.push(t);
        }
    }
    t = st.top();
    st.pop();
    return t;
}
void inOder(Node *t){
    if(t){
        inOder(t -> left);
        cout << t -> data << ' ';
        inOder(t -> right);
    }
}
void solve(){
    cin >> s;
    Node *t = Tree(s);
    inOder(t);
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)