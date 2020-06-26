/*
                1
            2       3
        4      5  6     7 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define X first
#define Y second
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int N = 1e5 + 5;

struct Node{
    int data;
    Node *left,*right;
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
typedef Node *Tree;

Tree ContructTree(int n){
    map <int,Tree> mp;
    Node *root = NULL;
    while(n--){
        int a,b;
        char c;
        cin >> a >> b >> c;
        Node *cha;
        if(mp.find(a) == mp.end()){
            cha = new Node(a);
            mp[a] = cha;
            if(root == NULL)
                root = cha;
        }
        else cha = mp[a];
        Node *con = new Node(b);
        if(c == 'L') cha -> left = con;
        else if(c == 'R') cha -> right = con;
        mp[b] = con;
    }
    return root;
}
void Lever_Order(Tree root){
    if(root == NULL) return;
    stack <Tree> st1;
    stack <Tree> st2;
    st1.push(root);
    while(!st1.empty() || !st2.empty()){
        while(!st1.empty()){
            Node *tmp = st1.top(); st1.pop();
            cout << tmp ->data << ' ';
            if(tmp ->right) st2.push(tmp ->right);
            if(tmp ->left) st2.push(tmp ->left);
        }
        while(!st2.empty()){
            Node *tmp = st2.top(); st2.pop();
            cout << tmp -> data << ' ';
            if(tmp ->left) st1.push(tmp ->left);
            if(tmp ->right) st1.push(tmp ->right);   
        }
    }
}
void solve(){
    int n;
    cin >> n;
    Tree root = ContructTree(n);
    Lever_Order(root);
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)