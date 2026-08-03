class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>>p;
        for(int i=0;i<nums.size();i++){
            p.push_back({nums[i],i});
        }
        sort(p.begin(),p.end());
        int left = 0;
        int right = nums.size()-1;
        while(left<right){
            long long sum = 1LL * p[left].first+p[right].first;
            if(sum==target){
                int i=p[left].second;
                int j=p[right].second;
                if(i>j){
                    swap(i,j);
                }
                return {i,j};
            }
            else if(sum<target){
                left++;
            }
            else{
                right--;
            }
        }
        return {};
    }
};
