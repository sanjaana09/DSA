class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = -1 ;
        for (int i = 0 ; i< nums.size() ; i++){
            if(nums[i] == 0) {
                j = i ;
                break ;
            }
        }

// no non zero numbers
     if ( j == -1) 
     {
//   when a function has a return type of void, it does not return any value. However, you can still use the return; statement to exit the function early — just without returning any value.

     return ;
     }
   
     for(int i = j+1 ; i<nums.size() ; i++)
     {
       if (nums[i] != 0) {
        swap(nums[i],nums[j]) ;
         j++ ;
          }
     } 
     


    }
};