#include <iostream>
#include <vector>
#include <queue>
using namespace std;
 
int N, M;
vector <int> ds[251];
void nhap ()
{
	cin>>N>>M;
	int a, b;
	for (int i=1; i<=M; i++)
	{
		cin>>a>>b;
		ds[a].push_back(b);
		ds[b].push_back(a);
	}
}
 
int dd[251];
void khoitao ()
{
	for (int i=1; i<=N; i++)
	{
		dd[i]=0;
	}
}
 
void BFS_Q (int i)
{
	queue <int> q;
	q.push(i);
	dd[i]=1;
	while (!q.empty())
	{
		int next=q.front();
		q.pop();
		for (int i=0; i<ds[next].size(); i++)
		{
			int t=ds[next][i];
			if (dd[t]==0) q.push (t);
			dd[t]=1;
		}
	}
}
 
int main ()
{
	//IN;
	nhap ();
	//OUT;
	khoitao();
	BFS_Q(1);
	int kt=0;
	for (int i=1; i<=N; i++)
	{
		if (dd[i]==0)
		{
			cout<<i<<endl;
			kt=1;
		}
	}
	if (kt==0) cout<<"0";
 
	return 0;
}