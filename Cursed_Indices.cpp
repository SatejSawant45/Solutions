#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        vector<int> v;
        int n;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        multiset<int> st;

        for (int i = 0; i < n; i++)
        {
            st.insert(v[i]);
        }

        vector<int> ans;

        int sum = 0;

        while (true)
        {

            auto it = st.upper_bound(sum);
            if (it != st.end())
            {
                sum = sum + *it;
                ans.push_back(*it);
                st.erase(it);
            }
            else
            {
                break;
            }
        }

        cout << st.size() << endl;

        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        for (auto x : st)
        {
            cout << x << " ";
        }
        cout<<endl;
    }
}