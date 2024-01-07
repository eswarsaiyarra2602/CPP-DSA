leetcode 11 - container with most water
class Solution {
public:
    int maxArea(vector<int>& height)
    {
        int maxarea=0;
        int n = height.size();
        int *ptr1 = &height[0];
        int *ptr2 = &height[n-1];
        while(ptr1 < ptr2){
            int area = min(*ptr1 , *ptr2) * (ptr2-ptr1) ;
            maxarea = max(maxarea,area);
            if(*ptr1 < *ptr2){
                ptr1++ ;
            }
            else{
                ptr2-- ;
            }
        }
        return maxarea;
    }
};
