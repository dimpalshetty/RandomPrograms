/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>

struct list {
    int data;
    struct list *right;
    struct list *left;
}; typedef struct list *NODE;

NODE first;

void front_insertion();
void display();

void front_insertion(){
    NODE temp;
    int data,n;
    temp = (NODE)malloc(sizeof(struct list));
    if (temp==NULL){
        printf("overflow");
    }
    else {
        
        printf("enter data");
        scanf("%d", &n);
        if(first==NULL)
        {
            temp->data=n;
            printf(" data is %d\n", temp->data);
            temp->right=NULL;
            temp->left=NULL;
            first=temp;
            
            
        }
        
        else 
        {
            temp->data=n;
            temp->left==NULL;
            temp->right=first;
            first->left=temp;
            first=temp;
            
        }
        
    }
    printf("inserted\n");
    
}

void display(){
    NODE cur;
     if(first==NULL){
        printf("Empty");
    }
    else {
        cur=first;
        while(cur!=NULL){
            printf("%d->" ,cur->data);
            cur=cur->right;
        }
    }
}




void main() {
    
    front_insertion();
    front_insertion();
    display();
//     int options;
    
//     printf("Enter the options 1, 2\n");
//     scanf("%d", options);
    
//     while(1)
    
//   { 
//       switch(options){
//           case 1: front_insertion();
//           break;
           
//           case 2: display();
//           break;
//       }
       
       
//   }
}
