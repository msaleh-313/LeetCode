class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) 
    {
        std::ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        int start=0;
        int end=0;
        double sum=0;
        double result=INT_MIN;
        int size=nums.size();
        while(end<size){
            sum=sum+nums[end];
            if(end-start+1==k)
            {
                result=max(sum,result);
                sum=sum-nums[start];
                ++start;               
            }
            ++end;
        }
        return result/k;       
    }
};
