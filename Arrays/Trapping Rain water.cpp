#include <iostream>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--){
	    int water=0;
	    cin>>n;
	    int arr[n],left[n],right[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    left[0]=0;
	    right[n-1]=0;
	    for(int i=1;i<n;i++){
	        left[i]=max(left[i-1],arr[i-1]);
	        right[n-i-1]=max(right[n-i],arr[n-i]);
	    }
	   // for(int i=0;i<n;i++){
	   //     cout<<left[i]<<" "<<right[i]<<endl;
	   // }
	    for(int i=1;i<n-1;i++){
	        water+=max(min(left[i],right[i])-arr[i],0);
	    }
	    cout<<water<<endl;
	}
	return 0;
}