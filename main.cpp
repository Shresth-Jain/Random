#include <iostream>

using namespace std;

int main()
{ int i,j,n;
cout<<"Enter the value of n ";
cin>>n;
cout<<"The coordinates of queen are as given \n";
for(i=0,j=1;i<n;i++)
{
    cout<<"("<<i<<","<<j<<")\n";
    if(j+2>=n)                       //values gets out of the chess board
    j=0;
    else
        j=j+2;
}                                   //We are moving one step down and 2 step ahead.

    return 0;
}
