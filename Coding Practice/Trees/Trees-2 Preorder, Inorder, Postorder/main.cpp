#include <iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

class node{

public:
   node(int data_in)
   {
       data=data_in;
       left=right=NULL;
   }
    int data;
    node* left;
    node* right;
};

class tree{
public:
    node* root;



    tree(){
    root=NULL;
    }
    ~tree()
    {
        free(root);
    }

void pre_order(node*);


};


 void tree::pre_order(node* ptr)
{  // root left right
    if(ptr==NULL)
        return ;

    cout<<ptr->data;
    pre_order(ptr->left);
    pre_order(ptr->right);

}



int main()
{   tree t=new tree();
    t->root->left->data=2;
    t->root->right->data=3;
    t->root->left->left->data=4;
    t->root->left->right->data=5;

    t->pre_order(t->root);
    printf("\n DONE");
    return 0;
}
