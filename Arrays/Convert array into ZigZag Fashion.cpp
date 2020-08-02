#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int flag=0;
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n-1;i++){
            if(!flag) 
                if(a[i]>a[i+1]) 
                    swap(a[i],a[i+1]);
            if(flag)    
                if(a[i]<a[i+1])
                    swap(a[i],a[i+1]);
            flag=!flag;
      }
        for(int i=0;i<n;i++)
            cout<<a[i]<<" "; cout<<"\n";
    }
	return 0;
}