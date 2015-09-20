#include<iostream>
#include<vector>
#include<stdlib.h>
#include<time.h>
using namespace std;

void fillVector(vector<int>&, int);
void sortVector(vector<int>&, int);
void printVector(vector<int>&);

int main()
{
    srand(time(NULL));
    int ran = rand() % 5 + 10;
    vector<int> values;
    fillVector(values, ran);
    printVector(values);
    sortVector(values, ran);
    printVector(values);
    return 0;
}

void fillVector(vector<int>& vectorFill, int ran)
{
    int i;
    for(i=0;i<ran;i++)
        vectorFill.push_back(rand() % 10);
}

void sortVector(vector<int>& vectorSort, int ran)
{
    int i,j,n,key,random;
    for(j=1;j<ran;j++)
    {
        key = vectorSort[j];
        i=j-1;
        while(i>=0&&vectorSort[i]>key)
        {
            vectorSort[i+1] = vectorSort[i];
            i=i-1;
        }
        vectorSort[i+1]=key;
    }
}

void printVector(vector<int>& vectorPrint)
{
    for(vector<int>::iterator it = vectorPrint.begin(); it != vectorPrint.end(); ++it)
        cout<<*it<<' ';
    cout<<"\n";
}

