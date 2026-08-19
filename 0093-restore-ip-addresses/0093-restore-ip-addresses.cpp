class Solution {
public:
    void solve(string& s, int index, int parts,
               string curr, vector<string>& ans)
    {
        if(parts == 4)
        {
            if(index == s.size())
                ans.push_back(curr);
            return;
        }
        for(int len = 1; len <= 3; len++)
        {
            if(index + len > s.size())
                break;
            string part = s.substr(index, len);
            if(part.size() > 1 && part[0] == '0')
                break;
            int value = stoi(part);
            if(value > 255)
                break;
            string next = curr;
            if(parts > 0)
                next += ".";
            next += part;
            solve(s, index + len, parts + 1, next, ans);
        }
    }
    vector<string> restoreIpAddresses(string s)
    {
        vector<string> ans;
        solve(s, 0, 0, "", ans);
        return ans;
    }
};