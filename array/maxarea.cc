/**
 * 问题描述:
 * [a0, a1, ..., an]
 * 求(i, ai), (j, aj)与x轴组成的一个水柜的能存储最大水的面积
 *
 * 解题思路:
 * 1.双指针
 * 2.移动双指针的思路，移动ai, aj中间的小的游标。ai小,i++;aj小,j--
 *   maxarea = min(ai, aj)*(j-i ) = ai*(j-i) // if ai < aj
 *   移动j,得出的结果肯定小于(i, j)   // min(ai, aj-1)(j-i-1) <= ai*(j-i-1) < ai*(j-i)
 *   移动i,得出的结果需要和(i, j)比较结果
 *   
 */
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea = 0;
        int i = 0;
        int j = height.size() - 1;

        while(i < j){
        	maxarea = max(min(height[i], height[j])*(j-i), maxarea);

        	if(height[i] < height[j]){
        		i++;
        	}
        	else{
        		j--;
        	}
        }

        return maxarea;
    }
};

