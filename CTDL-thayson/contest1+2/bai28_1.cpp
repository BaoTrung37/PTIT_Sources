#include<bits/stdc++.h>
using namespace std;

/*
	Sap xep mang
	Bo cac ptu trung
	Su dung de quy + quay lui:
		s < 0: ignore
		s = 0: them mang do vao ket qua
		else: xet ptu i hien tai vao res va
			  lap lai cho cac so tiep voi s = s-a[i]
			  sau do quay lui lai ptu truoc
*/

void solve(vector<int>& a, int s, vector<vector<int> >&res, vector<int>& r, int i){
	if(s < 0) return;
	if(s == 0){
		res.push_back(r);
		return;
	}
	
	//lap lai voi tat cac ptu con lai nho hon tong
	while(i < a.size() && s - a[i] >= 0){
		//cho toi khi xet  moi ptu co the + thanh tong s
		r.push_back(a[i]);
		//lap lai cho cac so tiep theo
		solve(a, s-a[i], res, r, i);
		i++;
		//(backtrack)
		r.pop_back();
	}
}
vector<vector<int> > tohop(vector<int>& a, int s){
	sort(a.begin(), a.end());
	//xoa cac ptu trung
	a.erase(unique(a.begin(), a.end()), a.end());
	vector<vector<int> >res;
	vector<int> r;
	solve(a, s, res, r, 0);
	return res;
}


int main(){
	int t;
	cin>>t;
	while(t--){
		int n, s;
		vector<int> a;
		cin>>n>>s;
		for(int i=0; i<n; i++){
			int x;
			cin>>x;
			a.push_back(x);
		}
		vector<vector<int> > ans = tohop(a, s);
		if(ans.size() == 0) cout<<"-1";
		else{
			for(int i=0; i<ans.size(); i++){
				if(ans[i].size() > 0){
					cout<<"[";
					for(int j=0; j<ans[i].size()-1; j++)
						cout<<ans[i][j]<<" ";
					cout<<ans[i][ans[i].size()-1]<<"] ";
				}
			}
		}
		cout<<endl;
	}
	return 0;
}

