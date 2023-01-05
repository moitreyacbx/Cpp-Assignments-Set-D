#include<iostream>
#include<string>
using namespace std;
class String1
{ 
    string str;
    public:
    String1(string word)
    {   
        
        str=word;
    }
    String1()
    {
        cout<<"Constructor called"<<endl;
    }
    String1 join(String1 obj)
    {
        String1 string3;
        string3.str=str + obj.str;
        return string3; 
    }
    void display()
    {
        cout<<"The concatenated string is:"<<str<<endl;
    }


};
int main()
{   
    string word,word2;
    cout<<"Enter the first string"<<endl;
    cin>>word;
    cout<<"Enter the second string"<<endl;
    cin>>word2;
    String1 obj1(word),obj2(word2),obj3;
    obj3=obj1.join(obj2);
    obj3.display();
    return 0;

}