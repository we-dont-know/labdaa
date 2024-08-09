// topological sort

  #include<stdio.h>
 #include<stdbool.h>
 #define maxnode 100
 typedef struct node{
 int id;
 int d[maxnode];
 int nd;
 bool visited;
 }node;
 node nodes[maxnode];
 int numnodes;
 void initialize()
 {
 for(int i=0;i<numnodes;i++)
 {
 nodes[i].id=i;
 nodes[i].nd=0;
 nodes[i].visited=false;
 }
 }
 void adddependency(int from ,int to)
 {
 nodes[to].d[nodes[to].nd++]=from;
 }
 void topologicalsort()
 {
 int numvisited=0;
 while(numvisited<numnodes)
 {
 for(int i=0;i<numnodes;i++)
 {
 }
 }
 }
 int main()
 {
 numnodes=7;
 initialize();
 if(!nodes[i].visited)
 {
 bool unvisited=false;
 for(int j=0;j<nodes[i].nd;j++)
 {
 if(!nodes[nodes[i].d[j]].visited)
 {
 unvisited=true;
 break;
 }
 }
 if(!unvisited)
 {
 printf("%d\t",nodes[i].id);
 numvisited++;
 nodes[i].visited=true;
 }
 }
 adddependency(1,3);
 adddependency(2,3);
 adddependency(3,4);
 adddependency(3,5);
 adddependency(4,6);
 adddependency(5,6);
 printf("topologicalsort\n");
 topologicalsort();
 printf("\n");
 return 0;
 }
 
