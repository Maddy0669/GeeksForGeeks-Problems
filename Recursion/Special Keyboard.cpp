#include <bits/stdc++.h>
using namespace std;

int find(int n){
    if(n>75)
        return -1;
    if(n<7)
        return n;
    
    int arr[n+1]={0};
    for(int i=1;i<7;i++)
        arr[i]=i;
    
    int cur=0;
    for(int i=7;i<=n;i++){
        int mul=2;
        for(int j=i-3;j>0;j--){
            cur=arr[j]*mul;
            mul++;
            if(cur>arr[i])
                arr[i]=cur;
        }    
    }
    return arr[n];
}

void solve(){
    int n;
    cin>>n;
    int ans = find(n);
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