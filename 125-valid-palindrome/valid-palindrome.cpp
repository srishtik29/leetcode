class Solution {
public:
    bool isPalindrome(string s) {
        string str = s;
        for(int i = 0; i < str.size(); i++) {
            str[i] = tolower(str[i]);
        }
        int start = 0;
        int end =str.size()-1;
        bool pal=true;
        while(pal==true && start<end){
            while(start < end && !isalnum(str[start])) {
                start++;
            }
            while(start < end && !isalnum(str[end])) {
                end--;
            }
            if(str[start]==str[end]){
                start++;
                end--;
            }
            else if(str[start]!=str[end]){
                pal= false;
            }
        }
        return pal;
    }
};