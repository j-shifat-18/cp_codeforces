// https://codeforces.com/problemset/problem/266/B

#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n , t ;
    cin>>n>>t;

    string s;
    cin>>s;

    for(int i = 1 ;i <= t ; i++){
        for(int j = 0 ; j< n-1 ; j++){
            if(s[j]=='B'&s[j+1]=='G'){
                char temp = s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
                j++;
            }
        }
    }

    cout<<s;
}