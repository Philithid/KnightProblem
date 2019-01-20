#ifndef GRAPH_H
#define GRAPH_H

#include <list>
#include <vector>
#include <deque>
#include <string>
#include "Node.h"
#include "Edge.h"

class Graph
{

public:

	virtual ~Graph();


	Node& addNode(Node* pNewNode);

	Edge& addEdge(Edge* pNewEdge);

	void remove(Node& rNode);

	void remove(Edge& rEdge);


	const std::list<Node*>& getNodes() { return m_nodes; }

	const std::list<Edge*>& getEdges() { return m_edges; }

	Node* findNode(const std::string& id);

	std::vector<Edge*> findEdges(const Node& rSrc, const Node& rDst);

	std::list<Edge*> findShortestPathDijkstra(Node& rSrcNode, Node& rDstNode);

protected:

	std::list<Node*> m_nodes;
	std::list<Edge*> m_edges;

};


//---------------------------------------------------------------------------------------------------------------------

#endif