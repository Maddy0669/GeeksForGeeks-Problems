#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> arr1(n+1);
    vector<int> arr2(n+1);
    
    for(int i=0;i<n;i++)
        cin>>arr1[i];
    for(int i=0;i<n;i++)
        cin>>arr2[i];
        
    arr1[n]=INT_MAX;
    arr2[n]=INT_MAX;
    
    int i=0;
    int j=0;
    int ans;
    int k=n;
    while(k--){
        if(arr1[i]<arr2[j] and i<n){
            ans=arr1[i];
            i++;
        }
        else if(j<n){
            ans=arr2[j];
            j++;
        }
    }
    if(arr1[i]<arr2[j])
        ans+=arr1[i];
    else 
        ans+=arr2[j];
    cout<<ans<<endl;
    return;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	    solve();
	return 0;
}