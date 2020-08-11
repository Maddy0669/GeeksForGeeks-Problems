vector <int> countDistinct (int a[], int n, int k){
    
    unordered_map<int,int> mp;
    vector<int> ans;
    int i;
    int count=0;
    for(i=0;i<k;i++){
        if(mp[a[i]]==0)
            count++;
        mp[a[i]]++;
    }
    ans.push_back(count);
    for(i=k;i<n;i++){
        if(mp[a[i-k]]==1)
            count--;
        mp[a[i-k]]--;
        
        if(mp[a[i]]==0)
            count++;
        mp[a[i]]++;
        ans.push_back(count);
    }
    return ans;
}