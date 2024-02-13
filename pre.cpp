#include <bits/stdc++.h>
using namespace std;

void second_approach(vector<long long> &nums, long long i, vector<vector<long long>> &ans)
{
    if (i == nums.size())
    {
        ans.push_back(nums);
        return;
    }

    for (long long j = i; j < nums.size(); j++)
    {
        swap(nums[i], nums[j]);
        second_approach(nums, i + 1, ans);
        swap(nums[i], nums[j]);
    }
}

void check_beautiful(vector<vector<long long>> &ans)
{
    for (long long i = 0; i < ans.size(); i++)
    {
        int count = 0;

        for (long long j = 0; j < ans[i].size() - 1; j++)
        {
            if (abs(ans[i][j] - ans[i][j + 1]) == 1)
            {
                count = 1;
                break;
            }
        }
        if (count == 0)
        {
            for (long long x = 0; x < ans[i].size(); x++)
            {
                cout << ans[i][x] << " ";
            }
            return;
        }
    }
    cout << "NO SOLUTION" << endl;
    return;
}

int main()
{
    int n;
    cin >> n;

    // Check for special cases where beautiful permutations are not possible
    if (n == 1)
    {
        cout << "1" << endl;
        return 0;
    }
    else if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    vector<long long> nums;
    for (long long i = 1; i <= n; i++)
    {
        nums.push_back(i);
    }

    vector<vector<long long>> ans;
    long long i = 0;
    second_approach(nums, i, ans);
    check_beautiful(ans);

    return 0;
}