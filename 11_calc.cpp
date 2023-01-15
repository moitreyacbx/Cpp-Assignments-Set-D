#include<iostream>
#include<math.h>
using namespace std;
typedef class Calc
{
    int n;
    char c;
    public:
    int calculate(int n, char c)
    {
        int rev=0;
        while(n>0)
        {
            rev=rev+(n%10);
            n=n/10;
            rev=rev*10;
        }
        return rev/10;
    }
    int calculate(int n, char c, int dummy)
    {
        for(int i=(n/2);i>2;i--)
        {
            if(n%i==0)
            {
                
                cout<<"Not a Prime Number"<<endl;
                return 1;
            }
            else
            {
                cout<<"Prime Number"<<endl;
                return 0;
            }
        }
    }

}C;
int main()
{
    C obj;
    int a,dummy=0;
    char charac;
    cout<<"Enter the number to calculate"<<endl;
    cin>>a;
    cout<<"Enter character 'r' to reverse digits or character 'p' to check prime number"<<endl;
    cin>>charac;
    if(charac=='r')
    {
       cout<<"The number reversed is: "<<obj.calculate(a,charac)<<endl;

    }
    else if(charac=='p')
    {
        obj.calculate(a,charac,dummy);
    }
    else
    {
        cout<<"********Please input valid character********"<<endl;
    }
    return 0;
}