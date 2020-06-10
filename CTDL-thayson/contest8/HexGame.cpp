#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
using namespace __gnu_pbds;

// 1 thủ thuật nhỏ: Policy Hash Table có sức mạnh vượt trội cực kì đáng nể với tốc độ 
// nhanh hơn 3 đến 6 lần đối với các lệnh thêm và xóa, 4 đến 10 lần đối với đọc/ghi
int l[10] = {3, 0, 2, 7, 4, 1, 6, 8, 5, 9};
int r[10] = {0, 4, 1, 3, 8, 5, 2, 7, 9, 6};

string xoay_trai(string u)
{
    string ans = "";
    for (int i = 0; i <= 9; i++){
        ans += u[l[i]];
    }
    return ans;
}

string xoay_phai(string u)
{
    string ans = "";
    for (int i = 0; i <= 9; i++){
        ans += u[r[i]];
    }
    return ans;
}

int process()
{
    // input
    string a;
    char X;
    for (int i = 0; i < 10; i++)
    {
        cin >> X;
        a.push_back(X);
    }
    // output
    gp_hash_table<string, int> daxet; // tương tự map, nhưng tốc dộ xứ lý các thao tác nhanh hơn đáng kể
    string temp, x, y; //  các trang thái đang xét, xoay trái, xoay phải
    queue<string> q;
    q.push(a);
    daxet[a] = 0;
    while (!q.empty())
    {
        temp = q.front();
        q.pop();
        if (temp == "1238004765"){
            return daxet[temp];
        }
        x = xoay_trai(temp);
        y = xoay_phai(temp);
        if (x == "1238004765" || y == "1238004765"){
            return daxet[temp] + 1;
        }
        if (daxet.find(x) == daxet.end())
        {
            daxet[x] = daxet[temp] + 1;
            q.push(x);
        }
        if (daxet.find(y) == daxet.end())
        {
            daxet[y] = daxet[temp] + 1;
            q.push(y);
        }
    }
}

main()
{
    faster()
    cout << process();
}