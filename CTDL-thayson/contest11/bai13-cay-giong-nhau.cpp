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
bool SameTree(Tree root1,Tree root2){
    if(root1 == NULL && root2 == NULL) 
        return true;
    if(root1 && root2){
        return(root1 -> data == root2 -> data &&
                SameTree(root1 -> left, root2 ->left) &&
                SameTree(root1 -> right, root2 ->right)
        );
    }
    return false;
}
void solve(){
    int n,m;
    cin >> n;;
    Tree root1 = ContructTree(n);
    cin >> m;
    Tree root2 = ContructTree(m);
    if(SameTree(root1,root2)) cout << 1;
    else cout << 0;
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)