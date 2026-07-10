class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int n=timeSeries.size();
        int c=0;
        for(int i=0;i<n-1;i++){
            c+=min(duration,timeSeries[i+1]-timeSeries[i]);
        }
        c+=duration;
        return c;
    }
};