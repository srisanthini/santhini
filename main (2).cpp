#include<iostream>
using namespace std;
int main()
{
    int r=5,h=7,w=100,hrs=6;
    cin>>r>>h>>w>>hrs;
    if(r+h+hrs>w)
    {
        cout<<"The tank can not be filled within 6.0 hours";

    }else{
        cout<<"The tank can be filled within 6.0 hours";

        
    }
    return 0;
}