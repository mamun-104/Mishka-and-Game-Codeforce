#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int m, c;
    int i,mishka=0,chris=0;;
    for(i=0;i<n;i++)
    {
        cin>>m;
        cin>>c;
        if(m>c){mishka++;}
        else if(m<c){chris++;}
        else {}
    }

    if(mishka>chris){cout<<"Mishka";}
    else if(chris>mishka){cout<<"Chris";}
    else {cout<<"Friendship is magic!^^";}



    return 0;
}
