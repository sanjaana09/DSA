class Solution {
  public:
  
//   vector<int> sortedArray(...)
// This defines a function named sortedArray.
// It returns a value of type vector<int>, which is a dynamic array (from the C++ STL).
// This means the function will return a list of integers — most likely a sorted or unioned array.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Optimal Approach ---
        int n1 = a.size() ;
        int n2 = b.size() ;
        int i = 0 ;
        int j = 0 ;
        vector<int> unionArr ;
        while(i<n1 && j < n2) {
            if(a[i] <= b[j] ) {
                if(unionArr.size() == 0  || unionArr.back() != a[i])
                {
                    unionArr.push_back(a[i]) ;
                 }
                i++ ;
        }
             else {
                if (unionArr.size() == 0 || unionArr.back() != b[j]) 
                {
                    unionArr.push_back(b[j]);
                }
                j++ ;
               }
                              }
            
             while (j<n2)
             {
                if(unionArr.size() == 0  || unionArr.back() != b[j])
                {
                    unionArr.push_back(b[j]) ;
                 }
                j++ ;
             }
             while (i<n1)
             {
                if(unionArr.size() == 0  || unionArr.back() != a[i])
                {
                    unionArr.push_back(a[i]) ;
                 }
                i++ ;
             }
             
             return unionArr ;
    }
};