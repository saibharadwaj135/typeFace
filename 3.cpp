#include<bits/stdc++.h>
using namespace std;
vector <int> integerTovector(int x)
{
    vector <int> resultArray;
    while (true)
    {
    resultArray.insert(resultArray.begin(), x%10);
    x /= 10;
    if(x == 0)
        return resultArray;
    }
}

bool isTrue(int j){
    if(j==0||j==1||j==2||j==5||j==6||j==8||j==9){
        return true;
    }else{
        return false;
    }
}

bool isTrueNum(int n){
    vector <int>digarray;
    digarray=integerTovector(n);
    for(auto i:digarray){
        if(!isTrue(i)){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    int count=0,i=1;
    int result;
    while(count!=n){
        if(isTrueNum(i)){
            count++;
            result=i;
        }i++;
    }
    cout<<result<<endl;
}