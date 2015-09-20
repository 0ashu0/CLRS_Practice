#include<iostream>
#include<vector>
using namespace std;
int main()
{
    cout<<"Enter count";
    int n,i,j,key;
    cin>>n;
    int input[n];
    cout<<"Enter numbers";
    for(i=0;i<n;i++)
        cin>>input[i];
    cout<<"sorting\n";
    for(j=1;j<n;j++)
    {
        key=input[j];
        i=j-1;
        while(i>=0&&input[i]>key)
        {
            input[i+1]=input[i];
            i = i-1;
        }
        input[i+1]=key;
    }

    for(i=0;i<n;i++)
        cout<<input[i]<<" ";

    return 0;
}
