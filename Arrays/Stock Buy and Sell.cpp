#include <bits/stdc++.h>
using namespace std;

void stock(int *arr, int n){
    vector<int> mx, mn;
    if (arr[0] > arr[1]) 
        mx.push_back(0); 
  
    else if (arr[0] < arr[1]) 
        mn.push_back(0); 
  
    for(int i=1;i<n-1;i++){ 
       if((arr[i-1]>arr[i]) and (arr[i]<arr[i+1])) 
           mn.push_back(i); 
         
       else if((arr[i-1]<arr[i]) and (arr[i]>arr[i+1])) 
           mx.push_back(i); 
    }
    if (arr[n - 1] > arr[n - 2]) 
        mx.push_back(n - 1); 
  
    else if (arr[n - 1] < arr[n - 2]) 
        mn.push_back(n - 1);
    int n1=mn.size();
    int n2=mx.size();
    if(n1==1 and n2==1 and mn[0]>=mx[0]){
        cout<<"No Profit";
        return;
    }
    int t=0;
    if(mx[0]==0)
        t=1;
    if(mn[n1-1]==n-1)
        n1--;
    
    for(int i=0;i<n1;i++)
        cout<<"("<<mn[i]<<" "<<mx[i+t]<<") ";
        
        
}

int main() {
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int *arr=new int[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    stock(arr,n);
	    cout<<endl;
	}
	return 0;
}