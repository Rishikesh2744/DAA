#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> p1,pair<int,int> p2)
{
    double v1 = (double) p1.first/p1.second;
    double v2 = (double) p2.first/p2.second;
    
    return v1>v2;
}

int main()
{
    int n;
    cout<<"Enter the no.of objects: ";
    cin>>n;

    vector<pair<int,int>> v(n);
    
    cout<<"Enter the weight of object ans profit of the object : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>v[i].first>>v[i].second;
    }
    
    sort(v.begin(),v.end(),compare);
    
    
    int w;
    cout<<"Enter capacity of Knapsack : ";
    cin>>w;
    
    
    int MaxP=0;
    
    vector<float> ans(n,0);
    
    for(int i=0;i<n;i++)
    {
        if(w>=v[i].second)
        {
            ans[i]=1.0;
            MaxP += v[i].first;
            w-= v[i].second;
            continue;
        }
        
        double vw = (double) v[i].first/v[i].second;
        
        ans[i]=vw;
        
        MaxP += vw*w;
        w=0;
        break;
            
    }
    
    for(int i=0;i<n;i++)    cout<<ans[i]<<" ";
    
    cout<<endl<<"Max profit : "<<MaxP<<endl;

}
