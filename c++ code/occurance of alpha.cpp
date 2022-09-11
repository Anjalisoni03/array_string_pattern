#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s ="Anjali";
    int n=s.size(),count;
    int visited[n];
    for(int i=0; s[i]!='\0';i++)
    {
        int count=1;
        if(visited[i]!=1)
        {
            for(int j=i+1;j<n;j++)
            {
                if(s[i]==s[j])
                {
                    count++;
                    visited[j]=1;
                }
            }
        cout<<s[i]<<" occured "<<count<<" times "<<endl;
        }
    }
    return 0;
}
