//
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int Max = 1e6+5;
using namespace std;
int n;
struct Time{
    int hh,mm,ss;
    int tong;
};
Time ds[5005];
void nhap(){
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> ds[i].hh >> ds[i].mm >> ds[i].ss;
        ds[i].tong = ds[i].hh * 3600 + ds[i].mm * 60 + ds[i].ss;
    }
}
void sapxep(){
    for(int i = 0 ; i < n ; i++)
        for(int j = 0 ; j < n ; j++)
            if(ds[i].tong < ds[j].tong){
                Time tmp = ds[i];
                ds[i] = ds[j];
                ds[j] = tmp;
            }
}
void hienthi(){
    for(int i = 0 ; i < n ; i++){
        cout << ds[i].hh << " " << ds[i].mm << " " << ds[i].ss << endl;
    }
}
int main(){
    nhap();
    sapxep();
    hienthi();
    return 0;
}
