#include "Hash.h"
#include<iostream>
#include<string>

using namespace std;

Hash::Hash()
{
   for(int i=0;i<tableSize;i++)
   {
       HashTable[i] = new item;
       HashTable[i]->name="Empty";
       HashTable[i]->drink="Empty";
       HashTable[i]->next=NULL;

   }
}

Hash::~Hash()
{
    //destructor
}
void Hash::AddItem(string name,string drink)
{
    int index =Hash(name);
    if(HashTable[index]->name=="empty")
    {
        HashTable[index]->name=name;
        HashTable[index]->drink=drink;

    }
    else
    { item* ptr=HashTable[index];
       item* n=new item;
       n->name=name;
       n->drink=drink;
       n->next=NULL;
       while(ptr->next!=NULL)
        s{
         ptr=ptr->next;
       }
       ptr->next=n;

     }

}
int Hash::Hash_func(string key)
{
    int Hash=0;
    int index;


    for(int i=0;i<key.length();i++)
    {
        Hash+=(int)key[i];
        cout<<"Hash = "<<Hash<<endl;

    }

    index = Hash % tableSize;



    return index;

}
