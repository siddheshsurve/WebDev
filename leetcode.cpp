class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> ans;
        int cur = nums.front();
        int nex = cur + 1;
        int sum;
        for (int i = 0; i < cur; i++)
        {
            sum = nums[cur] + nums[nex];
            while (1)
            {
                if (sum == target)
                {
                    ans.push_back(cur);
                    ans.push_back(nex);
                }
                cur += 1;
                nex += 1;
            }
        }
        return ans;
    }
};