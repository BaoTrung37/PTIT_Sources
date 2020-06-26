/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Node{
    Node *left,*right;
    int data;
};
typedef Node *Tree;

void init(Tree & t){
    t = NULL;
}
Node *TaoNode(int x){
    //cấp phát miền bộ nhớ
    Node *p = new Node;
    if(p != NULL){
        p -> data = x;
        p -> left = p ->right = NULL;
        return p;
    } 
}
void AddNode(Tree &t , Node *p){
    if(t == NULL){
        t = new Node;
        t = p;
    }
    else{
        if(p -> data == t -> data) return;
        // giá trị đưa vào nhỏ hơn gốc thì duyệt tiếp sang trái
        else if(p -> data < t -> data){
            AddNode(t -> left, p);
        }
        // giá trị đưa vào nhỏ hơn gốc thì duyệt tiếp sang phải
        else{
            AddNode(t -> right,p);
        }
    }
}

void Nhap(Tree &t){
    int n;
    cin >> n;
    Node *p = TaoNode(n);
    AddNode(t,p);
}
void Dem_node_la(Tree t, int &cnt){
    if(t){
        if(t -> left == NULL && t ->right == NULL)
            cnt++;
        else{
            Dem_node_la(t ->left,cnt);
            Dem_node_la(t ->right,cnt);
        }
    }
}
int getSize(Tree t)
{
   // Your code here
   if(t == NULL) return 0;
   else{
       return getSize(t -> left) + 1 + getSize(t -> right);
   }
}
void Sumofla(Tree t, int &cnt){
    if(t){
        if(t -> left == NULL && t ->right == NULL)
            cnt += t -> data;
        else{
            Sumofla(t ->left,cnt);
            Sumofla(t ->right,cnt);
        }
    }
}
void solve(){
    Tree t;
    init(t);
    int n;
    cin >> n;
    while(n--){
        Nhap(t);
    }
    int cnt = 0;
    Sumofla(t,cnt);
    cout << cnt;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)