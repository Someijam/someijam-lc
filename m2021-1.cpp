/*
Author:Someijam
Date:2022/11/08
Problem description:
小美的用户名
*/
#include<iostream>
#include<algorithm>
using namespace std;
bool nameJ(string name)
{
    if(!(('a'<=name[0]&&name[0]<='z')||('A'<=name[0]&&'Z'>=name[0])))
        return false;
    for(int i=0;i<name.length();i++)
    {
        if(!(('a'<=name[i]&&name[i]<='z')||('A'<=name[i]&&'Z'>=name[i])||('0'<=name[i]&&'9'>=name[i])))
            return false;
    }
    int numOfLetter=0;
    int numOfNum=0;
    for(int i=0;i<name.length();i++)
    {
        if(('a'<=name[i]&&name[i]<='z')||('A'<=name[i]&&'Z'>=name[i]))numOfLetter++;
        if(('0'<=name[i]&&'9'>=name[i]))numOfNum++;
    }
    if(!(numOfLetter*numOfNum))
        return false;
    return true;
}
int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        string name;
        cin>>name;
        if(nameJ(name))cout<<"Accept"<<endl;
        else cout<<"Wrong"<<endl;
    }
    return 0;
}