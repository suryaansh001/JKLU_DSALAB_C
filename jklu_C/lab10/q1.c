#include<stdio.h>
#include<stdlib.h>
//creating a binnary tree
struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node* createNode(int data){
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
//insertion of an element
struct node* insertNode(struct node* root, int data){
    if(root == NULL){
        root = createNode(data);
    }
    else if(data <= root->data){
        root->left = insertNode(root->left, data);
    }
    else{
        root->right = insertNode(root->right, data);
    }
    return root;
}
