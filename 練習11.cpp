#include <bits/stdc++.h>
using namespace std;

// 給定一個含有n個整數的序列,作去重操作
int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    vector<int> result;
    unordered_set<int> seen;
    for (int x : nums) {
        if (seen.insert(x).second)
            result.push_back(x);
    }

    for (int i = 0; i < (int)result.size(); i++)
        cout << result[i] << " \n"[i == (int)result.size() - 1];

    return 0;
}
