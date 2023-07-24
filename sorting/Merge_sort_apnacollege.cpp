#include<bits/stdc++.h>
using namespace std;

void merge(int input[], int low, int mid, int high)
{

    int b[high-low+1];
    int l1=low,l2=mid+1,i=0;
    while(l1 <= mid && l2 <= high)
    {
        if(input[l1] <= input[l2])
            b[i++] = input[l1++];
        else
            b[i++] = input[l2++];
    }   // end while loop here
    while(l1 <= mid)
    {
        b[i++] = input[l1++];
    }

    while(l2 <= high)
    {
        b[i++] = input[l2++];
    }

    int j=0;
    for(i = low; i <= high; i++)
        input[i] = b[j++];
}

void mergeS(int input[], int start, int end)
{
    int mid=(start+end)/2;
    if(end>start)
    {
        mergeS(input, start, mid);
        mergeS(input, mid+1, end);

        merge(input, start, mid, end);
    }
    else
    {
        return;
    }
}

void mergeSort(int input[], int size)
{
    // Write your code here
    if(size<=0)
    {
        return;
    }
    mergeS(input, 0, size-1);
}
int main()
{



    return 0;
}
