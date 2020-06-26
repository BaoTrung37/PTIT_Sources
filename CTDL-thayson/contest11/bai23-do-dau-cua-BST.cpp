/*
    Tạo cây đếm node có ít nhất 1 lá
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
    Node *left;
    Node *right;
};
typedef Node *Tree;

void init(Tree &t){
    t = NULL;
}
Node *TaoNode(int x){
    Node *p = new Node;
    p -> data = x;
    p -> left = p -> right = NULL;
    return p;
}
void AddNode(Tree &t,Node *p){
    if(t == NULL){
        t = new Node;
        t = p;
    }
    else{
        if(t -> data == p->data) return;
        else if(t -> data < p-> data)
            AddNode(t -> right,p);
        else AddNode(t -> left,p);
    }
}
void Nhap(Tree &t){
    int n;
    cin >> n;
    Node *p = TaoNode(n);
    AddNode(t,p);
}
int MaxSize(Tree t){
    if(t == NULL)
        return 0;
    else
        return 1 + max(MaxSize(t -> left), MaxSize(t ->right));
}
void solve(){
    Tree t;
    init(t);
    int n;
    cin >> n;
    while(n--){
        Nhap(t);
    }
    cout << MaxSize(t) - 1;
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)