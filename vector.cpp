#include <iostream>
#include<conio.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;//dynamic size
    int arr[50];//static fixed size

    v.push_back(22);//22
    v.push_back(29);//22 29
    v.push_back(12);//22 29 12

    cout<<"Size of vector"<<v.size()<<endl;
    int i=0;
    for(i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
    cout<<endl;

    //iterators
    for(auto it=v.begin(); it!=v.end();it++)
        cout<<*it<<" ";
    cout<<endl;

}
