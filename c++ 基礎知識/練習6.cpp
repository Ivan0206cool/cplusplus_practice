#include <bits/stdc++.h>
using namespace std;

//給定一個整數x,判斷它能否被3,5,7整除,並輸出相關的資訊
int main() {
    int x;
    cin>>x;
    if (x%3==0)
        cout<<"3 ";
    if (x%5==0)
        cout<<"5 ";
    if (x%7==0)
        cout<<"7";
    if (x%3 && x%5 && x%7)
        cout<<"n"; 
    cout<<"\n";   
    return 0;
}