#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n1,n2;
    cin>>n1>>n2;
    vector<int> arr1(n1);
    vector<int> arr2(n2);
    unordered_set<int> s;
    int flag=0;
    int sum1=0,sum2=0,dif;
    
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
        sum1+=arr1[i];
    }
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
        sum2+=arr2[i];
        s.insert(arr2[i]);
    }
    dif=abs(sum2-sum1);
    if(dif%2==1){
        cout<<-1<<endl;
        return;
    }
    dif/=2;
    int temp=1;
    if(sum2<sum1)
        temp=-1;
    dif=temp*dif;    
    
    for(int i=0;i<n1;i++){
        int key=arr1[i];
        if(s.find(key+dif)!=s.end()){
            flag=1;
            break;
        }
    }
    if(flag)
        cout<<1<<endl;
    else
        cout<<-1<<endl;
    return;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	    solve();
	return 0;
}