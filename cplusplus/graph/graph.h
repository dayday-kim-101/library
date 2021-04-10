#ifndef PCH_H
#define PCH_H

#include <iostream>

struct Vertex {
	int id;
	Vertex* next;
};

struct Edge {
	int src, des, weight;
};

class GraphAdjacencyList
{
public:
	int numOfVertex;
	Vertex* head;
	
	GraphAdjacencyList(Edge edges[], int numEdges, int numVertices)
	{
		this->head = new Vertex[numVertices]();
		this->numOfVertex = numVertices;

		

		for (int i = 0; i < numEdges; i++) {
			int src = edges[i].src;
			int des = edges[i].des;

		}
	}

	~GraphAdjacencyList()
	{
		for (int i = 0; i < numOfVertex; i++) {
			delete[] head[i];
		}
		delete[] head;
	}

	void initGraph(int numVertices);
	void isEmpty();
	void getAdjacent(Vertex v);

	Vertex* insVertex(int des, Vertex* head);
	Edge* insEdge();
	void delVertex();
	void delEdge();

	void createGraph();
	void destroyGraph();


};


#endif //PCH_H

