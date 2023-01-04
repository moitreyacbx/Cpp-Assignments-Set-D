#include<iostream>
using namespace std;
typedef class Pattern
{
    int n;
    public:
    void Pattern1();
    void print();
}P;
void Pattern::Pattern1()
{   int size;
    cout<<"Enter the size of pattern:"<<endl;
    cin>>size;
    n=size;
    
}
void Pattern::print()
{
    int i,j,k;
     for(i=0;i<=(n/2);i++)
    {
        for(j=0;j<i;j++)
        {
            cout<<" ";
        }
    
        for(j=0;j<n-(2*i);j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
int main()
{
    P obj;
    int n;
    obj.Pattern1();
    obj.print();
    return 0;
}