class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> h=arr;
        int n=arr.size();
        sort(h.begin(),h.end());
        unordered_map<int,int> m;
        int rank=1;
        for(int i=0;i<n;i++){
            if(m.find(h[i])==m.end()){
                m[h[i]]=rank;
                rank++;
            }
        }
        for(int i=0;i<n;i++){
            arr[i]=m[arr[i]];
        }
        return arr;
    }
};