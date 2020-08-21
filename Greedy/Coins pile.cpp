#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    int sum=INT_MAX;
    int temp;
    int mn=INT_MAX,mx=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mx=max(mx,arr[i]);
        mn=min(mn,arr[i]);
    }
    //cout<<mn<<" "<<mx<<endl;
    
    for(int key=mn;key<=mx;key++){
        temp=0;
        for(int j=0;j<n;j++){
            if(arr[j]<key)
                temp+=arr[j];
            else if(arr[j]>key+k)
                temp+=(arr[j]-key-k);
        }
        sum=min(sum,temp);   
    }
    cout<<sum<<endl;
    return;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	    solve();
	return 0;
}s