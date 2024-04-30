#include <string>


class Solution {
public:
    bool isPalindrome(int x) {
        std::string number_string = to_string(x);
        int lenght_of = number_string.length();
        std::string:: iterator it1 = number_string.begin();
        std::string:: iterator it2 = number_string.end();
        --it2;    

         for(int i = 0; i <= lenght_of/2; ++i){
            if(*it1 != *it2){
                return false;
            } else{
                ++it1;
                --it2;
            }
         }
        return true;
    }
};