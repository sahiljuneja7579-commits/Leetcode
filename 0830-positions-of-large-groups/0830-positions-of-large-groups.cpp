class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        int n=s.size();
        vector<vector<int>> ans;
        int st=0;
        while(st<n){
            int e=st;
            while(e+1<n && s[e]==s[e+1]){
                e++;
            }
            if(e-st+1>=3) ans.push_back({st,e});
            st=e+1;
        }
        return ans;
    }
};