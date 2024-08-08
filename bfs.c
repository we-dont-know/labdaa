 #include<stdio.h> 
int v[10]; 
void bfs(int n,int a[][10],int s) 
{ 
int i,q[10],u; 
int f=0,r=-1; 
v[s]=1; 
q[++r]=s; 
while(f<=r) 
{ 
} 
} 
int  main() 
{ 
u=q[f++]; 
for(i=1;i<=n;i++) 
if(a[u][i]==1&&v[i]==0) 
{ 
} 
int n,a[10][10],i,j,s; 
q[++r]=i; 
v[i]=1; 
printf("enter the no of node\n"); 
scanf("%d",&n); 
printf("enter the adjacency matrix\n"); 
for(i=1;i<=n;i++) 
{ 
} 
for(j=1;j<=n;j++) 
{ 
} 
scanf("%d",&a[i][j]); 
printf("enter the source\n"); 
scanf("%d",&s); 
for(i=1;i<=n;i++) 
{ 
v[i]=0; 
} 
bfs(n,a,s); 
for(i=1;i<=n;i++) 
{ 
} 
if(v[i]==0) 
printf("\n the node %d is not reachable\n",i); 
else 
return 0; 
}
