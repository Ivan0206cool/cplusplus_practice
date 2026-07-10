#include <bits/stdc++.h>
using namespace std;

// 給定一個含有n個整數的序列,作去重操作
// 輸入格式：第一行為序列長度n，第二行為n個以空白分隔的整數
// 範例輸入：
// 3
// 1 2 3
int main() {
    int n;
    cin >> n;

    vector<int> result;      // 去重後的序列，依原始出現順序保留
    unordered_set<int> seen; // 記錄已出現過的數字，用於O(1)判斷是否重複
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (seen.insert(x).second) // insert成功(第一次出現)才留下
            result.push_back(x);
    }

    for (int i = 0; i < (int)result.size(); i++)
        cout << result[i] << " \n"[i == (int)result.size() - 1]; // 最後一個數字後面接換行，其餘接空格

    return 0;
}
