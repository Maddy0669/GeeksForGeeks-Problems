#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    sort(arr.begin(),arr.end());
    
    int i=0;
    while(k>arr[i]){
        k-=arr[i];
        i++;
    }
    cout<<i<<endl;
    return;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	    solve();
	return 0;
}