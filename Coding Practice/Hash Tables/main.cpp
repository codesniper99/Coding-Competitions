#include <iostream>
#include<string>
#include<stdio.h>
#include "Hash.h"
using namespace std;

int main()
{   int index;
    Hash Hash_Object;
    index = Hash_Object.Hash_func("Akhil Vaid");
    printf("%d is index\n",index);
    return 0;
}
