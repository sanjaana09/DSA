class Solution {
    public boolean isPalindrome(int x) {
        if(x<0)
        return false ;
        int num = x ;
        int revnum = 0  ;
        int ans = 0 ;
        while ( num > 0)
        {
            revnum =num %10 ;
            num = num/10 ;
            ans = ans * 10 + revnum ;
        }; 
        if ( ans == x)
        return true ;
        else 
        return false ;

    }
}