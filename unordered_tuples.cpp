// Divya Kambaria
#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007
using namespace std;
int main()
{
     #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
     #endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//ll t; cin>>t;while(t--){ }
	map<vector<int> ,int> mp;
	vector<int> new_color;
	new_color.push_back(-1);
	new_color.push_back(-1);
	new_color.push_back(-1);
	mp[new_color]++;
	mp.clear();
	if(mp[new_color]==0)
	cout<<"true"<<endl;
  cout<<"no";
}
