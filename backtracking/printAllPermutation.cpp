class Solution {
public:
    void solve(vector<int>& ds,vector<int>& nums,vector<vector<int>> &ans,int freq[])
    {
        if(ds.size()==nums.size())
        {
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(!freq[i]){
                freq[i]=1;
                ds.push_back(nums[i]);
                 solve(ds,nums,ans,freq);
                freq[i]=0;
                ds.pop_back();
        }
            
        }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> ds;
        vector<vector<int>> ans;
        int freq[nums.size()];
        for(int i=0;i<nums.size();i++)
            freq[i]=0;
        solve(ds,nums,ans,freq);
        return ans;
    }
};
