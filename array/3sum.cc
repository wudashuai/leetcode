class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        sort(nums.begin(), nums.end());

        int i = 0;
        int j = nums.size() - 1;
        int k = i + 1;
        int closetSum = nums[i] + nums[k] + nums[j];

        while(i < j){
        	k = i + 1;
        	while(k < j){
        		if((nums[i] + nums[k] + nums[j]) == target){
        			return target;
        		}

        		if(abs(closetSum-target) > abs((nums[i]+nums[k]+nums[j])-target)){
        			closetSum = nums[i]+nums[k]+nums[j];
        		}
        		k++;
        	}

        	if(closetSum < target){
        		i++;
        	}
        	else if(closetSum > target){
        		j--;
        	}
        	else{
        		return closetSum;
        	}
        }

        return closetSum;
    }
};