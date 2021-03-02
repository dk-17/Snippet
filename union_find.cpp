// Divya Kambaria
#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007
using namespace std;
int count_val=0;
void make_set(int i,vector<int> &parent,vector<int>& sz)
{
	parent[i]=i;//initialise everynode as its parent itself;
	sz[i]=1;
}
int find_parent(int a,vector<int>& parent)
{
	//base case;
	count_val++;
	cout<<"count="<<count_val<<endl;
	if(parent[a]==a)
		return a;

	return  find_parent(parent[a],parent);
}
void union_set(int a,int b,vector<int> & parent,vector<int>& sz)
{
	int par_a=find_parent(a,parent);
	int par_b=find_parent(b,parent);
    
    cout<<"a= "<<a<<" parent of a= "<<par_a<<endl;
    cout<<"b= "<<b<<" parent of b= "<<par_b<<endl;
    cout<<endl;
	//if(par_a==par_b)
		//return;
	//in need to make parent whose size is greater
	//consider that always size of a is greater then size of b!
	//if not that swap it
	if(sz[par_a]<sz[par_b])
		swap(par_a,par_b);

	parent[par_b]=par_a;
	sz[par_a]=sz[par_a]+sz[par_b];
	for(int i=1;i<(int)parent.size();i++)
		cout<<parent[i]<<" ";
	cout<<endl;
}
int main()
{
     #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
     #endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//ll t; cin>>t;while(t--){ }
	int n; 
	cin>>n;//number of edge;
	vector<int> parent(n+1,0),sz(n+1,0);
	for(int i=1;i<=n;i++)
	{
		make_set(i,parent,sz);
	}
	int a,b;
	int t;
	cin>>t;
	while(t--)
	{
	
		cin>>a>>b;
	union_set(a,b,parent,sz);

    }
    for(int i=1;i<(int)parent.size();i++)
    	cout<<parent[i]<<" ";
}
