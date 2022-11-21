#include <iostream>
#include<map>
using namespace std;

int main()
{
    string a="going to go to goa";
    string b="go";
    char c = b[b.length()-1];
    
    map<char,int> mp;
    
    for(auto i : a)
    {
        mp[i]++;
    }
    
     for(auto i : mp)
    {
        if(i.first==c)
        {
            cout<<i.second;   
        }
       
    }
    return 0;
}
