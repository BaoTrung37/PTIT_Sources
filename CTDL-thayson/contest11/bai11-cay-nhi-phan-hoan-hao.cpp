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
bool TreePerfect(Tree root){
    if(root == NULL) return true;
    queue <pair<Tree,int>> q;
    int check = -1;
    q.push({root,0});
    while(!q.empty()){
        pair<Tree,int> tmp = q.front(); q.pop();
        Node *cur = tmp.first;
        int stt = tmp.second;
        if(cur -> left == NULL && cur -> right == NULL){
            if(check == -1) check = stt;
            if(check != stt) return false;
        }
        else if(cur -> left && cur -> right){
            q.push({cur -> left ,stt + 1});
            q.push({cur -> right ,stt + 1});
        }
        else{
            return false;
        }
    }
    return true;
}
void solve(){
    int n;
    cin >> n;
    Tree root = ContructTree(n);
    if(TreePerfect(root)) cout << "Yes";
    else cout << "No";
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)