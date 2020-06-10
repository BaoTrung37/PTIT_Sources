#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int dinh, canh;
typedef vector<vector<int>> dsk;
dsk ke;

int find(vector<int> parent, int i)
{
    if (parent[i] == -1)
    {
        return i;
    }
    return find(parent, parent[i]);
}

void Union(vector<int> &parent, int x, int y)
{
    int xset = find(parent, x);
    int yset = find(parent, y);
    if (xset != yset)
    {
        parent[xset] = yset;
    }
}

int isCycle()
{
    vector<int> parent(dinh + 1, -1);
    for (int i = 1; i <= dinh; i++)
    {
        for (int j = 0; j < ke[i].size(); j++)
        {
            int x = find(parent, i);
            int y = find(parent, ke[i][j]);
            if (x == y)
            {
                return 1;
            }
            Union(parent, x, y);
        }
    }
    return 0;
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
        if(isCycle()){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}
