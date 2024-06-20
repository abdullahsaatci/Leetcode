class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> num_umap;
        int size = nums.size();
        for (int i = 0; i < size; i++){
            num_umap[nums[i]] = i;
        }
        int sub;
        for (int i = 0; i < size; i++){
            sub = target - nums[i];
            if (num_umap.count(sub) && num_umap[sub] != i){
                return {i, num_umap[sub]};
            }
        }
        return {};
    }
};