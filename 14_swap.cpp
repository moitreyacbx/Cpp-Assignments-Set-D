#include<bits/stdc++.h>
using namespace std;
class num
{
    int i,j;
    public:
    num()
    {
        cout<<"Enter first number"<<endl;
        cin>>i;
        cout<<"Enter second number"<<endl;
        cin>>j;
        i=this->i;
        j=this->j;

    }
    friend void swap(num &o);
    void print()
    {
        cout<<"The numbers are i="<<i<<" and j="<<j<<endl;
    }
    
};
void swap(num &obj)
{
    obj.i=obj.i + obj.j;
    obj.j=obj.i - obj.j;
    obj.i=obj.i - obj.j;
}
int main()
{
    num obj1;
    cout<<"Before swapping"<<endl;
    obj1.print();
    cout<<"After swapping"<<endl;
    swap(obj1);
    obj1.print();
    return 0;
}


