#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *left, *right;
    
};


struct node *newnode(int item){
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data=item;
    temp->left=temp->right=NULL;
    return temp;
}

void inorder(struct node *root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d->", root->data);
        inorder(root->right);
    }
}

struct node *insert(struct node *node, int data){
    if(node==NULL){
       return newnode(data);
    }
    if(data>node->data){
        node->right=insert(node->right,data);
    }
    else {
        node->left=insert(node->left,data);
    }
    return node;
}


struct node *minvalue (struct node *node){
    struct node *current=node;
    while(current && current->left!=NULL){
        current=current->left;
    }
    return current;
} 



struct node *deletenode(struct node *root, int key){
    if (root==NULL){
        return root;
    }
    
    if(key<root->data){
        root->left=deletenode(root->left,key);
    }
    else if(key>root->data){
        root->right=deletenode(root->right,key);
    }
    
    else {
        if(root->right==NULL){
            struct node *temp=root->left;
            free(root);
            return temp;
        }
        else if(root->left==NULL){
            struct node *temp=root->right;
            free(root);
            return temp;
        }
        
        struct node *temp=minvalue(root->right);
        root->data=temp->data;
        deletenode(root->right,temp->data);
    }
    
    return root;
}




int main(){
    
    struct node *root=NULL;
    root=insert(root,8);
  root = insert(root, 3);
  root = insert(root, 1);
  root = insert(root, 6);
  root = insert(root, 7);
  root = insert(root, 10);
  root = insert(root, 14);
  root = insert(root, 4);
  
  printf("The inorder traversal is");
  inorder(root);
  
  printf("After deleting 10");
  root= deletenode(root,10);
  printf("the inorder of deleting is");
  inorder(root);
    
}
