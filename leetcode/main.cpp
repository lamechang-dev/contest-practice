#include <iostream>
#include <stack>
#include <unordered_map>
#include <string>

class Solution
{
public:
    bool isValid(std::string s)
    {
        std::stack<char> stack;
        std::unordered_map<char, char> matchingPairs = {
            {')', '('},
            {']', '['},
            {'}', '{'}};

        for (char ch : s)
        {
            if (ch == '(' || ch == '[' || ch == '{')
            {
                stack.push(ch);
            }
            else if (matchingPairs.count(ch))
            {
                if (stack.empty() || stack.top() != matchingPairs[ch])
                {
                    return false;
                }
                stack.pop();
            }
        }

        return stack.empty();
    }
};

int main()
{
    Solution solution;
    std::cout << solution.isValid("()") << std::endl;
    return 0;
}