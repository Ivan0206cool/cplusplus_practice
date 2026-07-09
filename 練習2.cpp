#include <bits/stdc++.h>
using namespace std;

//給定三條線段的長度(正整數)，判斷能否構成三角形
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b>c && a+c>b && b+c>a)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}