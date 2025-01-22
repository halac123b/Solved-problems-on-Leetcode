class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string mainPrefix = strs[0];

        string prefix = "";

        for (int i = 1; i < strs.size(); i++)
        {
            if (strs[i] == "")
            {
                mainPrefix = "";
            }
            if (mainPrefix == "")
            {
                break;
            }
            for (int j = 0; j < strs[i].length(); j++)
            {
                if (mainPrefix.find(prefix + strs[i][j]) == 0)
                {
                    prefix += strs[i][j];
                }
                else
                {
                    mainPrefix = prefix;
                }
                if (j == strs[i].length() - 1)
                {
                    mainPrefix = prefix;
                }
            }
            prefix = "";
        }

        return mainPrefix;
    }
};