class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int n=words.size();
        vector<int> common(26,INT_MAX);
        for(auto i:words){
            vector<int> freq(26,0);
            for(auto j:i){
                freq[j-'a']++;
            }
            for(int k=0;k<26;k++){
                common[k]=min(common[k],freq[k]);
            }
        }
        vector<string> ans;
        for(int i=0;i<26;i++){
            while(common[i]--){
                ans.push_back(string(1,'a'+i));
            }
        }
        return ans;
    }
};