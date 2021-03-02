// Divya Kambaria
#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007
using namespace std;

vector<int> ans;
struct TreeNode{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(): val(0),left(nullptr),right(nullptr){}
	TreeNode(int x):val(x),left(nullptr),right(nullptr){}
	TreeNode(int x,TreeNode*left,TreeNode* right): val(x),left(left),right(right){}
};
int height(TreeNode* root){
	if(root==NULL)
		return 0;
	return 1+max(height(root->left),height(root->right));
}
void traverse(TreeNode* root){
	if(root==NULL)
		return;
	traverse(root->left);
	ans.pb(root->val);
	traverse(root->right);
	return;
}



TreeNode* built_tree(vector<int>& inorder,int start,int end,unordered_map<int,int> & umap){
	//base case
	if(start>end)
		return NULL;

	int index=start;
	for(int j=start+1;j<=end;j++){
		if(umap[inorder[j]]<umap[inorder[index]])
			index=j;
	}

    TreeNode* root = new TreeNode(inorder[index]);
    root->left= built_tree(inorder,start,index-1,umap);
    root->right= built_tree(inorder,index+1,end,umap);
    return root;
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
	ans.clear();
	int n;cin>> n;
	vector<int> inorder(n,0);
	vector<int> level_order(n,0);

	for(int i=0;i<n;i++)
		cin>>inorder[i];
	for(int i=0;i<n;i++)
		cin>>level_order[i];

	unordered_map<int,int> umap;
	for(int i=0;i<n;i++)
		umap[level_order[i]]=i;

    TreeNode* root = built_tree(inorder,0,n-1,umap);

    traverse(root);
    for(int i=0;i<n;i++)
    	cout<<ans[i]<<" ";


     cout<<height(root)<<endl;






	
}
