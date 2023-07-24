#include<bits/stdc++.h>
using namespace std;
/*
1) Time complexity = O(n+1+n+1) = O(2*n +1) jehetu variable operation constant
 ke dominate kore tai O(2*n) ->n er sathe constant multiplied ache(c*n).
 tai constant k bad deya jay .
//Ultimate  T.complexity -> O(n)

2)Space complexity -> O(1+n)-> O(n)

cause amra (c*n) e c ke fele dite pari= O(n)



*/
int main()
{
    int n;//M.Complexity- O(1)
    cin>>n;
    vector <int> a(n);O(n)
//    a.resize(n);

    for(int i=0; i<n; i++)
    {
        cin>>a[i];//ekhane n times loop cholbe tai T.complexity O(n)

    }
    int maxi = a[0];
    int mini =a[0];//ekhane constant kaj korbe tai T.complexity O(1)
    int sum =0;

    for(int i=0; i<n; i++)
    {
        maxi = max(maxi,a[i]);
        mini = min(mini,a[i]);
        sum = sum + a[i];
    }
    /* ekhane abar n times loop cholbe jeta basically
       user input er upor dependent.tai T.complexity O(n)
    */


    cout<<maxi<<"\n";
    cout<<mini<<"\n";
    cout<<sum<<"\n";
    /*
     output print kora ekta constant operation so T.complexity is O(1)
    */





    return 0;
}
