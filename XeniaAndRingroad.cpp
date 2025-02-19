// https://codeforces.com/problemset/problem/339/B

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int n , m ;
    cin>>n>>m;

    int tasks[m];
    long long time = 0 ;
    int lastPos= 1 ;
    for(int i = 0 ; i < m ; i++)
    {
        cin>>tasks[i];

        if(tasks[i]>=lastPos)
        {
            time+=tasks[i]-lastPos;
            lastPos=tasks[i];
        }
        else 
        {
            time+=(tasks[i]+(n-lastPos));
            lastPos = tasks[i];
        }

    }
    cout<<time;

}