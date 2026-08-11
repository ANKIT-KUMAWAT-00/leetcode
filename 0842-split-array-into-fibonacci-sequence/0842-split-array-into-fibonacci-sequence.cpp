class Solution {
public:
    bool solve(string &num, int index, vector<int> &ans)
    {
        if(index == num.size())
            return ans.size() >= 3;
        long long cur = 0;
        for(int i = index; i < num.size(); i++)
        {
            if(i > index && num[index] == '0')
                break;
            cur = cur * 10 + (num[i] - '0');
            if(cur > INT_MAX)
                break;
            int n = ans.size();
            if(n >= 2)
            {
                long long sum = (long long)ans[n-1] + ans[n-2];
                if(cur < sum)
                    continue;
                if(cur > sum)
                    break;
            }
            ans.push_back((int)cur);
            if(solve(num, i+1, ans))
                return true;
            ans.pop_back();
        }
        return false;
    }
    vector<int> splitIntoFibonacci(string num) {
        vector<int> ans;
        solve(num,0,ans);
        return ans;
    }
};