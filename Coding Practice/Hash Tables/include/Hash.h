#include<string>
#include<iostream>
#include<cstring>
using namespace std;
#ifndef HASH_H
#define HASH_H


class Hash
{   static const int tableSize = 10;

    struct item
    {
      string name;
      string drink;
      item* next;
    };

    item* HashTable[tableSize];

    public:
        void AddItem(string name,string drink);
        int Hash_func(string key);
        Hash();
        virtual ~Hash();

    protected:

    private:
};

#endif // HASH_H
