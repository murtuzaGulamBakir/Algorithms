#include<stdio.h>
#include<conio.h>

int adj[20][20], weight[20][20], path[20], n;
void shortestpath(int s, int t)
{
	int i, dc, newdist, mindist, current, INF = 1000;
	int dist[10], nodeset[10], l, x;
	for(i = 1; i <=n; i++)
	{
		dist[i] = INF;
		nodeset[i] = 0;
	}
	current = s;
	dist[current] = 0;
	nodeset[current] = 1;
	while(current != t)
	{
		dc = dist[current];
		for(i = 1; i <= n; i++)
			if((adj[current]) && !(nodeset[i]))
			{
				newdist = dc + weight[current][i];
				if(newdist < dist[i])
				{
					dist[i] = newdist;
					path[i] = current;
				}
			}
			mindist = INF;
			for(i = 1; i <= n; i++)
				if(!(nodeset[i]) && (dist[i] < mindist))
				{
					mindist = dist[i];
					current = i;
				}
		nodeset[current] = 1;
	}
	printf("%d\n", dist[t]);
	l = t;
	do
	{
		x = path[l];
		printf("%d %d ", l, x);
		l = x;
	}
	while(l != s);

}
void main()
{

	int i, j, s, t, INF = 1000;
	clrscr();
	printf("Enter the number of nodes:\n");
	scanf("%d", &n);
	printf("Enter adjencency: Enter 1 if the path exists else enter 0:\n");
	for(i = 1; i <= n; i++)
		for(j = 1; j <= n; j++)
		{
			printf("From %d to %d: ", i, j);
			scanf("%d", &adj[i][j]);
		}
	for(i = 1; i <= n; i++)
		for(j = 1; j <= n; j++)
			weight[i][j] = INF;
	printf("Enter the weights:\n");
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= n; j++)
		{
			if(adj[i][j] == 1)
			{
				printf("Enter the weight from %d to %d: ", i, j);
				scanf("%d", &weight[i][j]);
			}
		}
	}
	printf("Enter the source node:\n");
	scanf("%d", &s);
	printf("Enter the destination node:\n");
	scanf("%d", &t);
	shortestpath(s, t);
	getch();

}
