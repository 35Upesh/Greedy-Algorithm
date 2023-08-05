#include<iostream>
#include<algorithm>

using namespace std;

struct Items
{
    int value;
    int weight;
};

bool upesh(Items a,Items b)
{
    float x = a.value / a.weight;
    float y = b.value / b.weight;
    
    return (x>y);
}

int main()
{
    Items a[] = {{21,7},{24,4},{12,6},{40,5},{30,6}};
    int n = 5;
    int wt = 20;
    int amount = 0;
    
    sort(a,a+n,upesh);
    
    for(int i=0; i<n; i++)
    {
        if(a[i].weight <= wt)
        {
            wt = wt - a[i].weight ;
            amount = amount + a[i].value ;
            cout<<a[i].value<<" "<<a[i].weight<<endl;
        }
        else
        {
            amount = amount + (a[i].value / a[i].weight)*wt;
            cout<<(a[i].value / a[i].weight)*wt<<" "<<wt<<endl;
            wt = 0;
            break;
        }
    }
    cout<<amount;
}
