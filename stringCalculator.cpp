#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class StringCalculator{
  
  public:
  int add(string numbers){
    int res=0;
    
    if(numbers.length()==0){
          return 0;
    }
    
    vector<int> nums;
    int x=0,t=0;
    for(int i=0;i<numbers.length();i++){
    if(numbers[i]==','){
        if(t) x*=-1;
        nums.push_back(x);
        x=0;
        t=0;
    }
    else if(numbers[i]=='-'){
        t=1;
    }
    else if(numbers[i]>='0' and numbers[i]<='9'){
        int y = numbers[i]-'0';
        x*=10;
        x+=y;
    }
    else if(numbers[i]>='a' and numbers[i]<='z'){
        int y = numbers[i]-'a'+1;
        x=y;
    }
    }
    nums.push_back(x);
    try {
        int flag=0;
        for(auto x:nums){
            if(x<0) flag=1;
        }
       if (flag==1)
       {
        throw nums;
       }
    }
    catch(vector<int> t){
        cout<<"Negatives not allowed ";
        for(auto x:t){
            if(x<0) cout<<x<<' ';
        }
        cout<<endl;
    }
    for(auto x:nums){
        if(x<=1000) res+=x;
    }
      
    return  res;
  }
  
    
};


int main()
{
    StringCalculator s;
    return 0;
}
