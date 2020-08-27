#include<stdio.h>
#include<conio.h>
int  size,v,u,adj[10][10],i,j,cost[10][10],dist[10];
void ssup()
{
   int k;    //k is no. of edges
   for(i=1;i<=size;i++)
      dist[i]=cost[v][i];
   for(k=2;k<=size;k++)
      for(u=1;u<=size;u++)
	for(i=1;i<=size;i++)
	{
	   if(adj[i][u]==1)
	   {
	      if(dist[u]>dist[i]+cost[i][u])
	      {
		 dist[u]=dist[i]+cost[i][u];
	      }
	   }
	}
   for(i=1;i<=size;i++)
      printf("the distance from 1 to %d is %d\n",i,dist[i]);
}
void main()
{
   int i,j;
   clrscr();
   printf("enter size: ");
   scanf("%d",&size);
   printf("if there is path enter 1 else 0\n");
   for(i=1;i<=size;i++)
   {
      for(j=1;j<=size;j++)
      {
	  printf("enter the adjacency for %d %d ",i,j);
	  scanf("%d",&adj[i][j]);
      }
   }
   for(i=1;i<=size;i++)
      for(j=1;j<=size;j++)
	 cost[i][j]=100;
   printf("enter weight \n");

      for(i=1;i<=size;i++)
      {
	 for(j=1;j<=size;j++)
	 {
	    if(adj[i][j]==1)
	    {
	       printf("from %d to %d ",i,j);
	       scanf("%d",&cost[i][j]);
	    }
	 }
      }
      printf("enter source \n");
      scanf("%d",&v);
      printf("enter destinstion\n");
      scanf("%d",&u);
      ssup();
      getch();
}
