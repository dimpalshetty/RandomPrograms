#include<stdio.h>
#include<stdlib.h>

int n;

struct list {
    int data;
    struct list *next;
}; typedef struct list *NODE;

NODE first = NULL;


NODE create(){
    NODE temp = (NODE)malloc(sizeof(struct list));
    scanf("%d",&temp->data);
    temp->next=NULL;
    return temp;
}


void front_insertion(){

    NODE temp;
    temp = create();
    temp->next=first;
    first=temp;


}

void front_del(){
    NODE temp;
    temp=first;
    first=first->next;
    free(temp);
    temp=NULL;
}

void rear_insert(){
    NODE cur;
    NODE temp;
    temp=create();
    if(first==NULL){
        first=temp;
        return;
    }
    cur=first;
    while(cur->next!=NULL){
        cur=cur->next;
    }
    
    cur->next=temp;


}

void insert_after(int pos){
    NODE cur;
    NODE temp;
    cur=first;
    if(first==NULL){
        printf("empty therefore no postion");
    }
    else {
     int count=0;
    while(cur!=NULL && count!=(pos-1)){
        cur=cur->next;
        count++;
    }

    temp=create();
    temp->next =cur->next;
    cur->next=temp;
    


    }
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
            cur=cur->next;
        }
    }
}

void rear_del(){
    NODE cur,prev;
   if(first==NULL){
       printf("empty");
   }
   else if(first->next==NULL){
       free(first);
       first=NULL;

   }
   else {
       cur=first;
       prev=NULL;
       while(cur->next!=NULL){
           prev=cur;
           cur=cur->next;

       }
       prev->next=NULL;
       free(cur);
       cur=NULL;
   }
}

int main(){
 int choice, n, i,j;
 while(1)
 {
     printf("\n1.Insert At Beginning\n 2.Front Deletion\n 3.Display\n 4.Rear Insert At End\n 5.Rear Deletion\n 6.Insert After ");
     scanf("%d", &choice);
     switch(choice){
    
    case 1: printf("Enter number of elements");
            scanf("%d", &n);
            for(i=0;i<n;i++){
            front_insertion();
            }
            break;
    case 2: front_del();
            break;
    case 3: display();
            break;
    case 4: printf("enter number of elements"); 
    scanf("%d", &n);
            
             
            for(i=0;i<n;i++){
            rear_insert();
            }
            break;
    case 5: rear_del();
            break; 
    case 6: printf("enter the postion you wish to enter the node after\n");
            scanf("%d", &j);
            insert_after(j);
            break;

    case 7: return;
    default: printf("wrong");                        

 }

 }


}
