//
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int Max = 1e6+5;
using namespace std;
int n , x , y;
int a[12][12] = {0};
int r[8] = { 2, 1, -1, -2, -2, -1, 1, 2 }; // x move
int c[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };  // y move
void input(){
    cin >> n >> x >> y;
    a[x][y] = 1;
}
void result(){
    for(int l = 1 ; l <= n ; l++){
        for(int m = 1 ; m <= n ; m++){
            cout << a[l][m] <<" ";
        }
        cout << endl;
    }
}
int insafe(int x,int y){
    if(x > 0 && y > 0 && x <= n && y <= n && a[x][y] == 0)
        return 1;
    return 0;
}
void Try(int i,int x,int y){
    int x_next,y_next;
    for(int k = 0 ; k < 8 ; k++){
        x_next = x + r[k];
        y_next = y + c[k];
        if(insafe(x_next , y_next ) == 1){
            a[x_next][y_next] = i;
            if( i < n * n){
                Try(i + 1 , x_next , y_next);
                a[x_next][y_next] = 0;
            }
            else result();
        } 
    }   
}
int main(){
    cin >> n >> x >> y;
    a[x][y] = 1;
    Try(2,x,y);
    return 0;
}
