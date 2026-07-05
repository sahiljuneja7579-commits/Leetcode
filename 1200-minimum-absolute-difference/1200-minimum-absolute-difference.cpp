class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int mini=INT_MAX;
        int d;
        for(int i=0;i<n-1;i++){
            d=abs(arr[i+1]-arr[i]);
            mini=min(mini,d);
        }
        vector<vector<int>> h;
        for(int i=0;i<n-1;i++){
            d=abs(arr[i+1]-arr[i]);
            if(mini==d) h.push_back({arr[i],arr[i+1]});
        }
        return h;
    }
};