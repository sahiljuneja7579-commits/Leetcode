class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int n=nums.size();
        int m=l.size();
        vector<bool> h;
        for(int i=0;i<m;i++){
            int start=l[i];
            int end=r[i];
            vector<int> sub(nums.begin()+start,nums.begin()+end+1);
            sort(sub.begin(),sub.end());
            int k=end-start+1;
            if(k>=2){
             int d=abs(sub[1]-sub[0]);
             bool ans=true;
             for(int i=1;i<k-1;i++){
                if(d!=abs(sub[i+1]-sub[i])){
                    ans=false;
                    break;
                }
             }
             h.push_back(ans);
            }
            else h.push_back(false);
        }
        return h;
    }
};