// Sample code to read input and write output:

/*
#include <iostream>

using namespace std;

int main() 
{
	char name[20];
	cin >> name;                     // Read input from STDIN
	cout << "Hello " << name;        // Write output to STDOUT
	return 0;
}
*/

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
vector<int> ans;
void compute_lps(string pattern,int m,int *lps)
{
  lps[0]=0;
  int i=1;
  int j=0;
  while(i<m)
  {
    if(pattern[i]==pattern[j])
    {
      lps[i]=j+1;
      i++;
      j++;
    }
    else if(pattern[i]!=pattern[j])
    {
      if(j!=0)
      {
        j=lps[j-1];
      }
      else
      {
        lps[i]=0;
        i++;
      }
    }
  }
}
void kmpsearch(string text,string pattern)
{
  int m=pattern.length();
  int n=text.length();
  int lps[m];
  memset(lps,0,sizeof(m));

  compute_lps(pattern,m,lps);
  int j=0;
  int i=0;
  while(i<n)
  {
    if(text[i]==pattern[j])       
   {                       
       i++;                
      j++;                 
    }                      
    if(j==m)               
    {
      ans.push_back(i-j);
      j=lps[j-1];
    }
    else if(pattern[j]!=text[i])
      {
        if(j!=0)
          j=lps[j-1];
          else
          i++;

      }
  }
}

int main()
{
  #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
     #endif
    ans.clear();
	string text;
	cin>>text;
	string name;
	cin>>name;
	transform(text.begin(), text.end(), text.begin(), ::tolower); 
    //cout << text << endl;
    transform(name.begin(), name.end(), name.begin(), ::tolower); 
   // cout << name << endl; 
	kmpsearch(text,name);
	
	cout<<ans.size();
	return 0;
}
