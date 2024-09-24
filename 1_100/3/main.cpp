#include <string>
#include <map>
#include <math.h>

class Solution
{
public:
    static int lengthOfLongestSubstring(string s)
    {
        int maxLength = 0;

        map<char, int> visitedCharacter;

        for (int left = 1, right = 0; right < s.length(); right++)
        {
            if ( //
                visitedCharacter[s[right]] >= left)
            { // Check if that character already exist in hash map and that index in current substring
                left = visitedCharacter[s[right]] + 1;
            }

            maxLength = max(maxLength, right - left + 2);
            visitedCharacter[s[right]] = right + 1;
        }

        return maxLength;
    }
};