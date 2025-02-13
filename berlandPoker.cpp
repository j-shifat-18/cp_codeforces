//  https://codeforces.com/problemset/problem/1359/A

#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        int n , m , k ;
        cin>>n>>m>>k;

        int card_pp=n/k;
        int max_joker = min(m,n/k);

        int rem_joker = m - max_joker ;

        if(rem_joker == 0) 
        {
            cout<<max_joker<<endl;
        }
        else {
            int max_other_joker = ((rem_joker)+(k-2))/(k-1);
            cout<<max_joker - max_other_joker <<endl;
        }
    }
}