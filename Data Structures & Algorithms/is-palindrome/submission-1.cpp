class Solution {
public:
    bool isPalindrome(string s) {
        string temp="";
        for (char c : s)
        {
            if (isalnum(c))
            {
                temp += tolower(c);
            }
        }
        int half = temp.length() / 2;
        int j = temp.length() - 1;

        for (int i = 0;i <= half;i++)
        {
            if (temp.length() == 1)
            {
                return true;
            }
           else if (temp[i] == temp[j])
            {
                j--;
            }
            else
                return false;
        }
        return true;
    }
};