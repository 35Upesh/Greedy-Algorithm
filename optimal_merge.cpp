#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int time[] = {4,3,2,5,7,9};
    int n = 6;
    int amount = 0;
    
    priority_queue<int,vector<int>,greater<int>> pq;
    
    for(int i=0; i<n; i++)
    {
        pq.push(time[i]);
    }
    
    while(pq.size()>1)
    {
        int x = pq.top();
        pq.pop();
        int y = pq.top();
        pq.pop();
        
        amount = amount + x + y;
        
        pq.push(x+y);
    }
    
    cout<<"Total time : "<<amount;
    return 0;
}
