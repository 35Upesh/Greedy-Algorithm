#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {900,940,950,1100,1500,1800};
    int dep[] = {910,1200,1120,1130,1900,2000};
    
    vector<pair<int,int>> v;
    
    for(int i=0; i<6; i++)
    {
        v.push_back(make_pair(arr[i],dep[i]));
    }
    sort(v.begin(),v.end());
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(v[0].second);
    int count = 1;
    
    for(int i=1; i<v.size(); i++)
    {
        if(pq.top()<=v[i].first)
        {
            pq.pop();
            pq.push(v[i].second);
        }
        else
        {
            count++;
            pq.push(v[i].second);
        }
    }
    cout<<"Number of trains platform need :"<<count;
    return 0;
}
