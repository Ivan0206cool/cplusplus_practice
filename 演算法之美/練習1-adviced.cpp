#include <bits/stdc++.h>
using namespace std;

//輸入x,y 輸出 [x,y] 區間閏年的數量，並在下一行輸出所有閏年的年份數字
//改進：原版用固定大小的全域陣列 int ans[1000]，若區間內閏年數量超過 1000
//會造成陣列越界（未定義行為）。這裡改用 std::vector<int>，大小隨資料動態成長，
//不需事先猜測容量上限。
bool judge(int year)
{
    if ((year%4==0 && year%100)|| year%400==0)
    {
        return true;
    }
    return false;
}

int main() {
    int x,y;
    cin >> x >> y;
    vector<int> ans; // 動態陣列，取代固定大小的 ans[1000]
    for(int i=x;i<=y;i++)
    {
        if (judge(i))
        {
            ans.push_back(i);
        }
    }
    cout<< ans.size()<<endl;
    for (int v : ans)
    {
        cout<< v<< " ";
    }
    return 0;
}
