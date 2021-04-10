#include "pch.h"

Vertex* GraphAdjacencyList::insVertex(int des, Vertex* head)
{
	Vertex* newVertex = new Vertex;
	newVertex->id = des;

	newVertex->next = head;

	return newVertex;
}

void GraphAdjacencyList::initGraph(int numVertices)
{
	for (int i = 0; i < numVertices; i++) {
		head[i].next = nullptr;
	}
}
