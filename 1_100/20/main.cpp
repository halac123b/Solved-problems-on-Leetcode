class Solution
{
public:
    bool isValid(string s)
    {
        vector<int> open;
        open.push_back(-1);
        int arr[3] = {0};

        bool valid = true;

        for (int i = 0; i < s.length(); i++)
        {
            if (valid == false)
            {
                break;
            }
            switch (s[i])
            {
            case '(':
                arr[0]++;
                open.push_back(0);
                break;

            case '[':
                arr[1]++;
                open.push_back(1);
                break;

            case '{':
                arr[2]++;
                open.push_back(2);
                break;

            case ')':
                if (open[open.size() - 1] != 0)
                {
                    valid = false;
                }
                else
                {
                    arr[0]--;
                    open.pop_back();
                }
                break;

            case ']':
                if (open[open.size() - 1] != 1)
                {
                    valid = false;
                }
                else
                {
                    arr[1]--;
                    open.pop_back();
                }
                break;

            case '}':
                if (open[open.size() - 1] != 2)
                {
                    valid = false;
                }
                else
                {
                    arr[2]--;
                    open.pop_back();
                }
                break;
            }
        }

        if (open.size() != 1)
        {
            valid = false;
        }

        return valid;
    }
};