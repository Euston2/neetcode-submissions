class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        //optimal approach o(n)

        unordered_set<int> set;

        for(int num : nums){
            if(set.contains(num)){
                return true;
            }

            set.insert(num);
        }
        return false;
    }
};