class Solution {
    public boolean isPalindrome(int x) {
        if(x<0)
        return false ;
        int num = x ;
        int rem = 0  ;
        int ans = 0 ;
        while ( num > 0)
        {
            rem =num %10 ;
            num = num/10 ;
            ans = ans * 10 + rem ;
        }; 
        if ( ans == x)
        return true ;
        else 
        return false ;

    }
}