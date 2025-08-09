class Solution {
  public:
    vector<int> intersection(vector<int> &arr1, vector<int> &arr2  ) {
        // code here
    int n = arr1.size() , m = arr2.size() ;
    int i= 0 , j = 0 ;
    
    vector<int>ans ;
    
    while (i < n && j < m) {
        if (arr1[i] < arr2[j]){
            i++ ;
        }
        else if (arr1[i] > arr2[j]) {
            j++ ;
        } else {  ////  arr1[i] == arr2[j]
            int val = arr1[i] ;
            
            // push only once 
         if(ans.empty() || ans.back() != val) 
         {
             ans.push_back(val) ;
         }
         while (i < n && arr1[i] == val) i++;
         while (j < m && arr2[j] == val) j++;
        }
    }
    return ans ;
    }
};

