#include<iostream>
#include<time.h>
#include<vector>
#include<stdlib.h>
using namespace std;
int main()
{
    srand(time(NULL));
    int ran = rand() % 5 + 10; //generating random between 10 to 15
    int i,j,key,k;
    int input[ran];
    for(i=0;i<ran;i++)
        input[i]=rand() % 10;

    cout<<"numbers\n";
    for(i=0;i<ran;i++)
        cout<<input[i]<<" ";

    cout<<"\nsorting\n";
    for(j=1;j<ran;j++)
    {
        key=input[j];
        i=j-1;
        while((i>=0) && (input[i]>key) )
        {
            input[i+1]=input[i];
            i = i-1;
        }
        input[i+1]=key;
    }

    for(i=0;i<ran;i++)
        cout<<input[i]<<" ";

    return 0;
}
