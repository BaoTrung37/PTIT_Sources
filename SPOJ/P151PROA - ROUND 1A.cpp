//https://www.spoj.com/PTIT/problems/P151PROA/
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int Max = 1e6+5;
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        int pos[11]={0};
        for(int i = 0 ; i < n ; i++){
            if(s[i] == '2')
                pos[2]++;
            else if (s[i] == '3')
                pos[3] ++;
            else if (s[i] == '4'){
                pos[3]++;
                pos[2] += 2; 
            }
            else if (s[i] == '5')
                pos[5] ++;
            else if (s[i] == '6'){
                pos[5]++;
                pos[3]++;
            }
            else if (s[i] == '7'){
                pos[7]++;
            }
            else if (s[i] == '8'){
                pos[7]++;
                pos[2] += 3;
            }
            else if (s[i] == '9'){
                pos[7]++;
                pos[2]++;
                pos[3] += 2;
            }
        }
        for(int i = 9 ; i >= 2 ; i--){
            if(pos[i] != 0){
                while(pos[i]){
                    cout << i;
                    pos[i]--;
                }
            }
        }
        cout << endl;
    }
    return 0;
}
