#include<list>
#include<iostream>
using namespace std;
class Graph{
int numvertices;
list<int>*adjlists;
bool*visited;
public:
graph(int vertices);
void addEdge(int src,int dest);
void BFS(int starVertex);
};
Graph::Graph(int vertices){
numVertices=vertices;
adjlist=new list<list>[vertices];
}
void Graph::addEdge(int src,int dest)
{
adjlist[src].push_back(dest);
adjlist[dest].push_back(src);
}

