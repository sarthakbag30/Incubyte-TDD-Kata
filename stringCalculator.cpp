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
    int x=0;
    for(int i=0;i<numbers.length();i++){
    if(numbers[i]==','){
        nums.push_back(x);
        x=0;
    }
    else if(numbers[i]>='1' and numbers[i]<='9'){
        int y = numbers[i]-'0';
        x*=10;
        x+=y;
    }
    else if(numbers[i]>='a' and numbers[i]<='z'){
        int y = numbers[i]-'a';
        x=y;
    }
    }
    nums.push_back(x);
    
    for(auto x:nums){
        if(x<=1000) res+=x;
    }
      
    return  res;
  }
  
    
};


int main()
{
    StringCalculator s;
    cout<<s.add("12,8");

    return 0;
}
