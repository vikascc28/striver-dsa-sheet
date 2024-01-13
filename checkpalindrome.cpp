// Check whether a given number ’n’ is a palindrome number.

// Note :
// Palindrome numbers are the numbers that don't change when reversed.
// You don’t need to print anything. Just implement the given function.
// Example:
// Input: 'n' = 51415
// Output: true
// Explanation: On reversing, 51415 gives 51415.


bool palindrome(int n)
{
    int x=0;
    int dummy=n;
    while(n>0){
        int digit=n%10;
        x=x*10+digit;
        n=n/10;
    }
    if(dummy==x){
        return true;
    }
    else{
        return false;
    }
}