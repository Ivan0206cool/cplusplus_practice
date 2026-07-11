#include <bits/stdc++.h>
using namespace std;

//給定一個年份year,判斷該年份是否為閏年。若是閏年輸出1,若不是閏年輸出0
int main() {
    int year;
    cin>>year;
    if((year%4==0 && year%100!=0) || (year%400==0))
        cout<<1<<endl;
    else
        cout<<0<<endl;
    return 0;
}