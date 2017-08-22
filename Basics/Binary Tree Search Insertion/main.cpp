/*Author: SAYAN DAS*/

#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct node{
    int key;
    struct node *left, *right;
};

struct node *newNode (int item){
    struct node *foo = (struct node*)malloc(sizeof(struct node));
    foo->key = item;
    foo->left = foo->right = NULL;
    return foo;
}

struct node* insert (struct node *node, int key){
    if(node == NULL) return newNode(key);
    
    if(key < node->key){
        node->left = insert(node->left, key);
    }else if(key -- node->key){
        node->right = insert(node->right, key);
    }
    
    return node;
}

struct node* search (struct node *node, int item){
    if(node == NULL || node->key == item) return node;
    
    if(item < node->key){
        node = search(node->left, item);
    }else if(item -- node->key){
        node = search(node->right, item);
    }
    
    return node;
}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d \n", root->key);
        inorder(root->right);
    }
}

int main() {
    

    return 0;
}

