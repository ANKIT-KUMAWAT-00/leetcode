class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {

        if(changed.size() % 2)
            return {};

        sort(changed.begin(), changed.end());

        unordered_map<int,int> mp;

        for(int x : changed)
            mp[x]++;

        vector<int> ans;

        for(int x : changed)
        {
            if(mp[x] == 0)
                continue;

            if(mp[2*x] == 0)
                return {};

            ans.push_back(x);

            mp[x]--;
            mp[2*x]--;
        }

        return ans;
    }
};