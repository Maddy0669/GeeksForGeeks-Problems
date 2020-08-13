#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>k>>n;
    vector<int> ans;
    priority_queue<int, vector<int>, greater<int>> q;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    for(int i=0;i<k-1;i++)
        ans.push_back(-1);
    
    for(int i=0;i<k;i++)
        q.push(arr[i]);
    ans.push_back(q.top());
    
    for(int i=k;i<n;i++){
        if(arr[i]>q.top()){
            q.pop();
            q.push(arr[i]);
        }
        ans.push_back(q.top());
    }
    for(int i=0;i<n;i++)
        cout<<ans[i]<<" ";
    cout<<endl;
    return;
    
}

int main() {
	int t;
	cin>>t;
	while(t--)
	    solve();
	return 0;
}