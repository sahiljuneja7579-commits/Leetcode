class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size();
        int h=0;
        sort(citations.begin(),citations.end());
        reverse(citations.begin(),citations.end());
        for(int i=0;i<n;i++){
            int j=0;
            int c=0;
            while(j<=i){
                if(citations[j]>i) c++;
                j++;
            }
            if(c==(i+1)) h=i+1;
        }
        return h;
    }
};