#include<iostream>
using namespace std;
long int fact(int num)
{
    if(num>2)
    {//cout<<num<<endl;
        return(fact(num-1)+fact(num-2));}
    {return(1);}
}
int main()
{
    int n;
    cout<<"Enter the no of elements\n";
    cin>>n;
    cout<<fact(n);
    return 0;
}