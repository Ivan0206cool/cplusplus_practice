#include <bits/stdc++.h>
using namespace std;

//給定一個整數n,判斷n是奇數還是偶數。若是奇數輸出"Odd",若是偶數輸出"Even"
int main() {
    int n;
    cin>>n;
    if(n%2)
        cout<<"Odd"<<endl;
    else
        cout<<"Even"<<endl;
    return 0;
}