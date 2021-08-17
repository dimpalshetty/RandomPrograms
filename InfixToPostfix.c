#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
char infix[40], postfix[40], stack[100] ;
int top=-1, i=0,j,p,c,pr;
void push(char c);
char precedence(char p);
int main(){
    printf("enter the infix expression");
    scanf("%s", infix);
    push('#');
    while(infix[i]!=0){
        c=infix[i];
        if(c=='('){
            push('(');
        }
        else if(isalnum(c)){
            postfix[j++]=c;
        }
        else if(c==')'){
            while(stack[top]!='('){
                postfix[j++]=stack[top--];
            }
            top--;
        }
        else {
            pr=precedence(c);
            // if(c=='^'){
            //     pr++;
            // }
            while(precedence(stack[top])>=pr){
                postfix[j++]=stack[top--];
            }
            push(c);
        }
        i++;
    }
    
    while(stack[top]!='#'){
        postfix[j++]=stack[top--];
    }
    postfix[j]='\0';
    printf("the resultant is %s", postfix);
    
}

void push(char c){
    stack[++top]=c;
}

char precedence(char p){
    switch(p){
        case '#': return 0;
        case '(': return 1;
        case '+':
        case '-': return 2;
        case '*':
        case '/': 
        case '%':return 3;
        case '^': return 4;
    }
}
