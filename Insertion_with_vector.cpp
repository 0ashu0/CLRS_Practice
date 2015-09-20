#include<iostream>
#include<vector>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int ran = rand() % 5 + 10;
    int i,j,n,key,random;
//    vector<int> values{ 3, 4, 56, 6, 778 };
    vector<int> values;
    for(i=0;i<ran;i++)
        values.push_back(rand()%10);
    for(vector<int>::iterator it = values.begin(); it != values.end(); ++it)
        cout<<*it<<' ';

    for(j=1;j<ran;j++)
    {
        key=values[j];
        i=j-1;
        while(i>=0&&values[i]>key)
        {
            values[i+1]=values[i];
            i=i-1;
        }
        values[i+1] = key;
    }
    cout<<"sorted vectors are\n";
    for(vector<int>::iterator it = values.begin(); it != values.end(); ++it)
        cout<<*it<<' ';

    return 0;
}

