#include<bits/stdc++.h>
//#include <iostream>  
 //hashing is data storage now possible
// to easily store data in constant time and
// retrieve them in constant time as we
using namespace std;
int main(){
    cout<<"enter size";
    int n;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //precompute

    unordered_map<string,int>mp;

    // int hash[13]={0};
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    // for(int it=0;it<mp.size();it++){
    for(auto it:mp){
      //  cout<<"Element  :--  "<<it.first<<"freq :-  "<<it.second<<endl;
        char p='g';
       string res;
        if(mp(it.first)==p){
            
            res=it.first;
           // cout<<"here"  <<res  <<"have freq "<<max  <<endl;
        
    }

    }
    


    return 0;
}







  

