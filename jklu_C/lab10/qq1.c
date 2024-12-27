#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
};

struct node* createnode(int data) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

void insert(struct node* root, int data, int position) {
    if (root == NULL) {
        printf("Root is NULL. Cannot insert.\n");
        return;
    }
    
    struct node* freshnode = createnode(data);
    if (position == -1) {
        root->left = freshnode;
    } else {
        root->right = freshnode;
    }
}

struct node* insertforBST(struct node* root, int data) {
    if (root == NULL) {
        return createnode(data);
    }

    if (data < root->data) {
        root->left = insertforBST(root->left, data);
    } else if (data > root->data) {
        root->right = insertforBST(root->right, data);
    }

    return root;
}
void inorder(struct node* node){
    if(node!=NULL){
        inorder(node->left);
        printf("%d ,",node->data);
        inorder(node->right);


    }
}
int preorder(struct node* node,int count){

    if(node!=NULL){
        printf("%d ,",node->data);
        count+=1;
        

        preorder(node->left,count);
        
        preorder(node->right,count);


    }
    return count;
}

void postorder(struct node* node){
    if(node!=NULL){
        
        postorder(node->left);
        
        postorder(node->right);
        printf("%d ,",node->data);


    }
}
void smallestElement(struct node* node){
    while (node->left!=NULL)
    {
        node=node->left;
    }
    printf("%d",node->data);
       


}
void maximummElement(struct node* node){
    while (node->right!=NULL)
    {
        node->right++;
    }
    printf("%d",node->data);
       


}
void height(struct node* node){

}

int main() {
    struct node* root = NULL;
    root = createnode(10);
    insert(root, 20, 1);
    insert(root, 30, 1);
    insert(root, 40, 1);
    insert(root, 50, -1);
    insert(root, 60, 1);

    printf("Binary Tree Inorder Traversal: ");
    inorder(root);
    printf("\n");

    struct node* bst_root = NULL;
    bst_root = insertforBST(bst_root, 10);
    bst_root = insertforBST(bst_root, 20);
    bst_root = insertforBST(bst_root, 30);
    bst_root = insertforBST(bst_root, 25);
    bst_root = insertforBST(bst_root, 5);
    bst_root = insertforBST(bst_root, 15);

    printf("BST Inorder Traversal: ");
    inorder(bst_root);
    printf("\n");
    //call inorder traversal
    
    printf("BST Postorder Traversal: ");
    postorder(bst_root);
    printf("\n");
    int count=0;
    printf("%d",preorder(bst_root,count));


    return 0;
}
