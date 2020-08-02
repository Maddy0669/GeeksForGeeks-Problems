#include <bits/stdc++.h>
using namespace std;

bool compare(int a, int b){
    string str1=to_string(a);
    string str2=to_string(b);
    return str1+str2>str2+str1;
}

int main() {
    int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    sort(arr,arr+n,compare);
	    for(int i=0;i<n;i++)
	        cout<<arr[i];
	    cout<<endl;
	}
	return 0;
}