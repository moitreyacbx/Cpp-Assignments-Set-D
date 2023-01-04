#include<iostream>
using namespace std;
class Complex
{
    int num,com;
    public:
    Complex()
    {   int n,i;
        cout<<"Working for default constructor value"<<endl;
        cout<<"Enter the real value:"<<endl;
        cin>>n;
        cout<<"Enter the imaginary value:"<<endl;
        cin>>i;
        num=n;
        com=i;
    }
    Complex(int n)
    {   int i;
        num=n;
        cout<<"Working for constructor with one value assigned as:"<<num<<endl;
        cout<<"Enter the imaginary value:"<<endl;
        cin>>i; 
        com=i;
    }
    Complex(int n,int i)
    {   
        num=n;
        com=i;
    }
    Complex sum(Complex ob)
    {   Complex res(0,0);
        res.num=num + ob.num;
        res.com=com + ob.com;
        return res;
    }
    void show()
    {
        cout<<"The sum is: "<<num<<"+"<<com<<"i";
    }
};
int main()
{
    Complex obj1,obj2(6),obj3(0,0);
    obj3=obj1.sum(obj2);
    obj3.show();
    return 0;

}