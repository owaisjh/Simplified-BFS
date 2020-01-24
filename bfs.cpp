#include <iostream>
using namespace std;


int n, adj[10][10]={0}, visited[10]={0};

void bfs(int);

int main()
{
	cout<<"\nEnter number of nodes:";
	cin>>n;  //10
	int e;
	cout<<"Enter number of edges:";
	cin>>e;

	for(int i=0;i<e;i++)
	{
		int v1,v2;
		cout<<"Enter vertex 1:";
		cin>>v1;
		cout<<"Enter vertex 2:";
		cin>>v2;
		adj[v1-1][v2-1]=1;
		adj[v2-1][v1-1]=1;		
	}	
	int node;
	cout<<"\nEnter starting node:";
	cin>>node;
	cout<<"\nBFS:\n";
	bfs(node-1);
	return 0;
}

void bfs(int node)
{
	int q[n];
	int f=-1;
	int r=-1;
	int tp;
	
	q[++r]=node;
	visited[node]=1;
	while(f !=r)
	{
		tp=q[++f];
		cout<<" "<<tp+1;
		for(int i=0;i<n;i++)
		{
			if(adj[i][tp]==1 && visited[i]==0)
			{
				q[++r]=i;
				visited[i]=1;
			}
		}
	}
}
