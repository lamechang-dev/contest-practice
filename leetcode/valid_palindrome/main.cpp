#include <string>
using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        // remove non-alphanumeric characters
        s.erase(remove_if(s.begin(), s.end(), [](char c)
                          { return !isalnum(c); }),
                s.end());
        // convert to lowercase
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        int left = 0;
        int right = s.size() - 1;
        while (left < right)
        {
            if (s[left] != s[right])
                return false;
            left++;
            right--;
        }
        return true;
    }
};