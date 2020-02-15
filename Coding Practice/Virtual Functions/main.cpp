#include <iostream>
#include<stdio.h>
using namespace std;

class base{
  protected:
      int a,b,x;
  public:
    void setVals(int , int , int);
    virtual void Vfunc();

};
void base:: setVals(int q,int w,int e)
{
    a=q;
    b=w;
    x=e;

}
 void base::Vfunc()
{
    int sum=0;
    for(int i=0;i<x;i++)
    {
        sum+=(a+b);
    }
    cout<<"Base : "<<sum<<'\n';
}

class der1: public base
{
public:
    void Vfunc()
    {
        int result;
        result=a*x;
        cout<<"Derived 1 : "<<result<<'\n';
    }

};

class der2: public base
{
public:
     void Vfunc()
    {
        int result;
        result=b*x;
        cout<<"Derived 2: "<<result<<'\n';
    }


};


int main()
{
    base o1;
    der1 o2;
    der2 o3;
    base *p;
    // WE USE -> ONLY FOR POINTERS NOT FOR OBJECTS
    o1.setVals(5,4,3);
    o2.setVals(6,7,8);
    o3.setVals(1,2,3);
    p = &o1;
    p->Vfunc();
    p=&o2;
    p->Vfunc();
    p= &o3;
    p->Vfunc();
    cout<<"\n\nDONE   ";
    int*a;
    int b=5;
    a=&b;
    cout<<*a;
     delete a;
    return 0;
}
