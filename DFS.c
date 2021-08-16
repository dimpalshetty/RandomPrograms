#include<stdio.h>
 int a[20][20], n, reached[20], count=0, start;

int dfs(int s){
    int p,q;
    reached[s]=1;
    for(p=1;p<=n;p++){
        for(q=1;q<=n;q++){
            if(a[s][p]==1&&reached[p]!=1){
                count++;
                printf("%d -> %d\n",s,p);
                dfs(p);
                
            }
        }
    }
    
    
}

int main(){
    int i,j;
    printf("enter number of nodes");
    scanf("%d", &n);
    printf("enter the matrix");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter the starting vertex");
    scanf("%d", &start);
    
    dfs(start);
    if(count==n-1)
    {
        printf("the graph is connected");
    }
    else 
    {
        printf("the graph is not connected");
    }
    
}
