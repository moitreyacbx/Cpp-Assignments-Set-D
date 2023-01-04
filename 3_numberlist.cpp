#include<iostream>
using namespace std;
typedef class Num_lists
{
    int *arr,*srt,i,min,max,size;
    public:
    void createarr()
    {   cout<<"Enter the size of array:"<<endl;
        cin>>size;
        arr=(int *)malloc(size*(sizeof(int)));
        cout<<"Enter elements:"<<endl;
        for(i=0;i<size;i++)
        {   
            cin>>arr[i];
        }
    }
    void disparr()
    {   
        cout<<"The array is:"<<endl;
        for(i=0;i<size;i++)
        {   
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void sortarr();
    int findmin()
    {
        min=arr[0];
        return min;
    }
    int findmax()
    {
        max=arr[size-1];
        return max;
    }
}NL;
void NL::sortarr()
{
    int i,j,temp;
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"After sorting"<<endl;
}
int main()
{
    NL obj;
    obj.createarr();
    obj.sortarr();
    obj.disparr();
    cout<<"The minimum number is: "<<obj.findmin()<<endl;
    cout<<"The maximum number is: "<<obj.findmax()<<endl;
    return 0;
}