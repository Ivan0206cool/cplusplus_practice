#include <bits/stdc++.h>
using namespace std;

//輸入體重和身高，根據BMI指數判斷體型並輸出相應的結果判斷
int main() {
    float weight,height,result;
    cout<<"輸入體重(kg) 身高(m)"<<endl;
    cin >> weight >> height;
    result =weight/(height*height);
    if (result<18.5)
        cout<< "BMI:"<<result<<"  Underweight"<<endl;
    else if (result>=18.5 && result<24)
        cout<< "BMI:"<<result<<"  Normal"<<endl;
    else
        cout<< "BMI:"<<result<<"  Overweight"<<endl;
    
    return 0;
}