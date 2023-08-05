#include<iostream>
#include<algorithm>
using namespace std;

struct event
{
    int start;
    int end;
};

bool compare(event a,event b)
{
    return (a.end<b.end);
}

int main()
{
    event e[] = {{6,11},{5,7},{8,9},{8,12},{3,6},{1,4}};
    int n = 6;
    
    sort(e,e+n,compare);
    
    int current = 0;
    cout<<e[current].start<<"  "<<e[current].end<<endl;
    
    for(int i=1; i<n; i++)
    {
        if(e[current].end<=e[i].start)
        {
            cout<<e[i].start<<"  "<<e[i].end<<endl;
            current = i;
        }
    }
}
