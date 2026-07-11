#include <bits/stdc++.h>
using namespace std;

//輸入x,y 輸出 [x,y] 區間閏年的數量，並在下一行輸出所有閏年的年份數字
int ans[1000];

bool judge(int year)
{
    if ((year%4==0 && year%100)|| year%400==0)
    {
        return true;
    }
    return false;
}

int main() {
    int x,y,cnt=0;
    cin >> x >> y;
    for(int i=x;i<=y;i++)
    {
        if (judge(i))
        {
            ans[cnt++]=i;
        }
    }
    cout<< cnt<<endl;
    for (int i=0 ;i<cnt;i++)
    {
        cout<< ans[i]<< " ";
    }
    return 0;
}