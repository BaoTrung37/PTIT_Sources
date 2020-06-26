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

void NLR(Tree t){
    if(t){
        cout << t->data << ' ';
        NLR(t -> left);
        NLR(t -> right);
    }
}
void LNR(Tree t){
    if(t){
        LNR(t -> left);
        cout << t->data << ' ';
        LNR(t -> right);
    }
}
void LRN(Tree t){
    if(t){
        LRN(t -> left);
        LRN(t -> right);
        cout << t->data << ' ';
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
    cout << "haha: ";
    NLR(t);
    cout  <<'\n';
    cout << "haha: ";
    LNR(t);
    cout << '\n';
    cout << "haha: ";
    LRN(t);
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)