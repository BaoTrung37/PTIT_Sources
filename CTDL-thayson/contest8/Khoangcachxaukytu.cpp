//Ideal: Sử dụng thuật toán BFS bắt đầu từ WordStart và duyệt qua các từ chỉ khác
//1 ký tự vs nó, cho đến khi tìm đc từ WordTarget hoặc đã duyệt hết các từ

#include <bits/stdc++.h>

using namespace std;
int minChange(string wstart, string wtarget, vector<string> &dic)
{
    //Nếu từ cần chuyển đến ko có trong dic
    unordered_set<string> dict(dic.begin(), dic.end()), head, tail, *phead, *ptail;
    if (dict.find(wtarget) == dict.end())
    {
        return 0;
    }
    head.insert(wstart);
    tail.insert(wtarget);
    int ladder = 2;
    while (!head.empty() && !tail.empty())
    {
        if (head.size() < tail.size())
        {
            phead = &head;
            ptail = &tail;
        }
        else
        {
            phead = &tail;
            ptail = &head;
        }
        unordered_set<string> temp;
        for (auto it = phead->begin(); it != phead->end(); it++)
        {
            string word = *it;
            for (int i = 0; i < word.size(); i++)
            {
                char t = word[i];
                for (int j = 0; j < 26; j++)
                {
                    word[i] = 'A' + j;
                    if (ptail->find(word) != ptail->end())
                    {
                        return ladder;
                    }
                    if (dict.find(word) != dict.end())
                    {
                        temp.insert(word);
                        dict.erase(word);
                    }
                }
                word[i] = t;
            }
        }
        ladder++;
        phead->swap(temp);
    }
    return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;
        vector<string> dic;
        string tmp;
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            dic.push_back(tmp);
        }
        cout << minChange(s, t, dic) << endl;
    }
    return 0;
}