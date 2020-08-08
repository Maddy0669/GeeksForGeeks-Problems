#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	int arr[] = {1,2,5,10,20,50,100,200,500,2000};
	while(t--){
	    int n=9;
	    vector<int> ans;
	    int num;
	    cin>>num;
	    while(n>=0){
	        if(num>=arr[n]){
	            num=num-arr[n];
	            ans.push_back(arr[n]);
	        }
	        else
	            n--;
	    }
	    for(int i=0;i<ans.size();i++)
	        cout<<ans[i]<<" ";
	    cout<<endl;
	}
	return 0;
}