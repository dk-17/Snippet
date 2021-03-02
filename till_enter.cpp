


#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007
using namespace std;
int main ()
{

  #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
     #endif

	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


  // string rawInput;
  //  vector<string> numbers;
  //   while( getline( cin, rawInput ) )
  //  { numbers.push_back(rawInput);}

  //  	for(int i=0;i<(int)numbers.size();i++)
  //  		cout<<numbers[i]<<" ";
  //  	cout<<endl;

	//ll t; cin>>t; while(t--){}
  // another method!!!!!!!!!!!!!!!!
	// vector<string> v;
	// string s;
	// getline(cin, s);

	// stringstream x(s);
	// string word;
	// while (x >> word)
	// 	v.push_back(word);
	// //cout<<s[i]<<endl;
	// cout << "r=" << v.size() << endl;
	// vector<int>a;
	// //sort(v.begin(), v.end());
	// for (int i = 0; i < (int)v.size(); i++)
	// {
	// 	//ll temp = stoi(v[i]);
	// 	//cout << temp << endl;
	// 	a.pb(stoi(v[i]));
	// 	//cout << a[i] << endl;
	// }
	// sort(a.begin(), a.end());
	// for (ll i = 0; i < (int)a.size(); i++)
	// 	cout << a[i] << " ";

	//another method!!!!!!!!!!!!1

vector<int> v;
	string s;
	getline(cin, s);

	stringstream x(s);
	int word;
	while (x >> word)
		{
			v.push_back(word);
            //cout<<"v[i]"<<v[i]<<endl;
		}
	//cout<<s[i]<<endl;
	cout << "r=" << v.size() << endl;
  for(int i=0;i<v.size();i++)
  	cout<<v[i]<<" ";
  cout<<endl;
	vector<int>a;
	// //sort(v.begin(), v.end());
	// for (int i = 0; i < (int)v.size(); i++)
	// {
	// 	//ll temp = stoi(v[i]);
	// 	//cout << temp << endl;
	// 	a.pb(stoi(v[i]));
	// 	//cout << a[i] << endl;
	// }
	// sort(a.begin(), a.end());
	// for (ll i = 0; i < (int)a.size(); i++)
	// 	cout << a[i] << " ";
}


