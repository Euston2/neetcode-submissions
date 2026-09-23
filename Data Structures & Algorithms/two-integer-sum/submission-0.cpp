class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> map;
        vector<int> res(2);

        for(int i = 0; i < nums.size(); i++){
            int otherNum = target - nums[i];

            if(map.contains(otherNum)){
                res[0] = map[otherNum];
                res[1] = i;
                return res;
            }

            map[nums[i]] = i;
        }

        return res;
    }
};
