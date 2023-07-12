#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool compare(string &s1,string &s2)
{
    return s1.size() < s2.size();
}
int main() {
	// your code goes here
    vector<string>dictionary,match;
    string s; cin>>s;
    map<char,int>dict,str;
    for(int i=0;i<16;i++){
        string t; cin>>t;
        dictionary.push_back(t);
        // for(int j=0;j<t.size();t++) dict[t[j]]++;
    }
    // for(int i=0;i<m;i++) str[s[i]]++;
    // int ans=0;
    // for(auto &x:str)
    // {
    //     if(dict.find(x.first)!=dict.end()){
    //         ans+=min(x.second,dict[x.first]);
    //     }
    // }
    // cout<<ans
    vector<pair<char,int>>mpp;
    for(int i=0;i<s.size();i++){
        mpp.push_back({s[i],0});
    }
    cout<<mpp.size()<<endl;
    int ans=0;
	 int n=dictionary.size(),m=s.size();
        for(int i=0;i<n;i++)
        {
            vector<int>vec;
            string ss=dictionary[i];
            int ini=-1,flag=0,j=0;
            for(int k=0;k<m;k++)
            {
            
                if(ini!=-1){
                    if(ss[j] == s[k]) j++;
                    else{
                        ini=-1;
                        j=0;
                    }
                }
                else{
                if(ss[j] == s[k]){
                    j++;
                    if(ini == -1) ini=k;
                }
                }
                if(j == ss.size()){
                    flag++;
                    j=0;
                    vec.push_back(ini);
                    ini=-1;
                }
            }
            if(flag){
                for(auto &x:vec){
                for(int j=x;j<x+ss.size();j++){
                    mpp[j].second++;
                    // s[j]=tt1;
                }
                }
            }
           
        }
        for(int i=0;i<m;i++)
        {
            if(mpp[i].second>0) ans++;
        }
        cout<<m-ans<<endl;
        
}
