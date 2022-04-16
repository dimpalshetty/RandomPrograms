#include<stdio.h>
#define SIZE 5
int items[SIZE];
int front=-1, rear=-1;

int insert(int n){
    if(rear==SIZE-1){
        printf("Queue is full");
    }
    else{
    if (front==-1){
        front=0;
        
    }   
    // printf("rear is %d", rear);
    rear++;
    printf("%d", items[front]);
    // printf("rear is %d", rear);
    items[rear]=n;
    }
    
    printf("inserted %d\n", n);
    
}


void deletef(){
    if (front==-1){
        printf("Queue is empty");
    }
    else {
        printf("The data removed is %d\n", items[front]);
        front++;
        if (front>rear){
            front=rear=-1;
        }
    }
}

void display_front(){
    if (front==-1 || rear==-1) {
        
        printf("Empty");
        
    }
    else {
        //printf("front is %d", front);
        printf("The element at front is %d\n", items[front]);
    }
}

void display_back(){
    if (front==-1 || rear==-1) {
        
        printf("Empty");
        
    }
    else {
        printf("The element at back is %d\n", items[rear]);
    }
}

void display(){
    if (front==-1){
        printf("queue is empty");
    }
    else {
        for(int i=front; i<=rear;i++){
            printf("%d\t", items[i]);
        }
    }
}

int main(){
    insert(2);
    insert(4);
    insert(6);
    display_front();
    display_back();
    display();
    // display_back();
    deletef();
    display();
    
}

