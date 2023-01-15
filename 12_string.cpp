#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Str
{
    string stri;
    public:
    void input()
    {   
        cout<<"Enter the string:"<<endl;
        cin>>stri;
    }
    void print()
    {
        cout<<"The string is:"<<stri<<endl;
    }
    Str operator+(const Str &obj)
    {
        Str obj1;
        obj1.stri = stri + obj.stri  ;
        reverse(obj1.stri.begin(),obj1.stri.end());
        return obj1;
        
    }

};
int main()
{
    Str obj1,obj2,obj3;
    obj1.input();
    obj2.input();
    obj3 = obj1 + obj2;
    obj3.print();
    return 0;
}