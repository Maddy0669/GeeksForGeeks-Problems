#include <iostream>
using namespace std;

int main() {
	int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int nums[n];
        for(int i=0;i<n;i++)
            cin>>nums[i];
            
	    int i=0;
        int j=n-1;
        int t=0;
        while(t<=j){
            if(nums[t]==2){
                nums[t]=nums[j];
                nums[j]=2;
                j--;
            }
            else if(nums[t]==0){
                nums[t]=nums[i];
                nums[i]=0;
                i++;
                t++;
            }
            else
                t++;
        }
        for(int p=0;p<n;p++)
            cout<<nums[p]<<" ";
        cout<<endl;
    }
	return 0;
}