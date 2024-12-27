#include<stdio.h>
#include<stdlib.h>
//creating
struct node {
    int data;
    struct node* left;
    struct node* right;
}node;

void createnode(struct node* node,int data){
    struct node* new=(struct node*)malloc(sizeof(node));
    new->data=data;
    new->left=NULL;
    new->right=NULL;

}

//code for pre
void preorder(struct node* bst){
    if(bst==NULL){
        return ;
    }
    else{
        printf("%d",bst->data);
        preorder(bst->left);
        preorder(bst->right);
        
        
    }
}
void  inorder(struct node* bst){
    if(bst==NULL){
        return ;
    }
    else{
        inorder(bst->left);
        printf("%d",bst->data);
        
        inorder(bst->right);
        
        
    }
}
void  postorder(struct node* bst){
    if(bst==NULL){
        return ;
    }
    else{
        postorder(bst->left);
        postorder(bst->right);
        printf("%d",bst->data);
        
       
        
        
    }
}
void insertnodeInBST(struct node**root,struct node* new)
{
    /* data */
    if (*root==NULL){
        *root=new;
    }
    else if(*root->data>new->data){
        insertnodeInBST(&(*root)->left,new);
    }
    else{
        insertnodeInBST(&(*root)->right,new);
    }

};
//calculate height
int height(struct node* root){
    if (root==NULL){
        return 0;
    }
    else if (root->left==NULL && root->right==NULL){
        return 1;
    }
    else {
        return(1+ height(root->left)+height(root->right));
    }

    


}
int sumofNode(struct node* root){
    //int sum=0;
    if(root==NULL){
        return 0;
    }
    else{
        return (sumofNode(root->left)+sumofNode(root->right));
    }
}

//solve function

void select(struct node* root,int k){
    if(root==NULL){
        return NULL;

    }
    else if(root->data>k){
        select(root->left,k);
    }
    else if(root->data<k){
        select(root->right,k);
    }
    else{
        if(root->left==NULL && root->right==NULL){
            delete(root);
        }
        else if(root->left==NULL && root->right!=NULL){
            int temp;
            temp=root->data;
            delete(root);
            return temp;

        }
        else if(root->right==NULL){
        int temp;
        temp=root->data;
        delete(root);
        return temp;
        }
        else{
            
        }
    }

}
//delete node of the given data




int main(){




}