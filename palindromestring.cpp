bool checkpalindrome(string str){
    //int len=str.size();
    l = 0;
    r = str.size() -1;
    // Compare left and right characters, If equal then 
    // continue otherwise not a palindrome
    while(l < r){
        if(inputString[l] != inputString[r]){
            return false;
        }
        l++;
        r--;
    }
    return true;
}