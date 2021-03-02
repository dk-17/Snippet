// Divya Kambaria
#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007
using namespace std;
  struct ListNode {
      int value;
      ListNode *next,*prev;
    ListNode() : value(0), next(nullptr) ,prev(nullptr) {}
      ListNode(int x) : value(x), next(nullptr) ,prev(nullptr) {}
      ListNode(int x, ListNode *next,ListNode *prev) : value(x), next(next),prev(prev){}
             
 };
int main()
{
     #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
     #endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//ll t; cin>>t;while(t--){ }
	ListNode* head=new ListNode(5);
	cout<<"list value is = "<<head->value;
	cout<<" next element = "<<head->next;
	cout<<" prev element = "<<head->prev;
}
