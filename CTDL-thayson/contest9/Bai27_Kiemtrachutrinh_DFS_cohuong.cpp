#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool vs[1005], callvs[1005];
int dinh, canh;
typedef vector<vector<int>> dsk;
dsk ke;

bool DFS(int u, const dsk ke)
{
    vs[u] = true;
    callvs[u] = true;
    for (int i = 0; i < ke[u].size(); i++)
    {
        int v = ke[u].at(i);
        if (vs[v] == false)
        {
            if (DFS(v, ke))
            {
                return true;
            }
        }
        else if (callvs[v])
        {
            return true;
        }
    }
    callvs[u] = false;
    return false;
}

bool Chutrinh()
{
    for (int i = 1; i <= dinh; i++)
    {
        vs[i] = false;
        callvs[i] = false;
    }
    for (int i = 1; i <= dinh; i++)
    {
        if (DFS(i, ke))
        {
            return true;
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> dinh >> canh;
        ke.clear();
        ke.resize(dinh + 5);
        while (canh--)
        {
            cin >> x >> y;
            ke[x].push_back(y);
           // ke[y].push_back(x);
        }
        if (Chutrinh())
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}