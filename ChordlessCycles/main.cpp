/*
*	Efficient Enumeration of Chordless Cycles
*	Authors: Elisângela Silva Dias, Diane Castonguay, Humberto Longo, Walid Abdala Rfaei Jradi
*	Paper: https://arxiv.org/abs/1309.1051
*
*	Python version by 2019Mohamed: https://github.com/2019mohamed/Efficient-enumeration-of-chordless-cycles/tree/main
*
*	Written in C++ by: Navid Omidi
*/

#include <iostream>
#include <string>
#include "Graph.h"

int main() {
	// node and graph are defined as a template class to hold any kind of data
	// in this example we just use a string for each node
	Graph<std::string> graph;
	graph.AddNode(0, "v0");
	graph.AddNode(1, "v1");
	graph.AddNode(2, "v2");
	graph.AddNode(3, "v3");
	graph.AddNode(4, "v4");
	graph.AddNode(5, "v5");
	graph.AddNode(6, "v6");
	graph.AddNode(7, "v7");
	graph.AddNode(8, "v8");


	graph.AddEdge(0, 1);
	graph.AddEdge(0, 3);
	graph.AddEdge(0, 4);
	graph.AddEdge(1, 2);
	graph.AddEdge(1, 3);
	graph.AddEdge(3, 4);
	graph.AddEdge(3, 5);
	graph.AddEdge(3, 8);
	graph.AddEdge(5, 6);
	graph.AddEdge(6, 7);
	graph.AddEdge(7, 8);


	std::list<std::list<int>> C = ChordlessCycles(graph);

	for (auto it = C.begin(); it != C.end(); ++it) {
		std::cout << "Chordless Cycle: ";
		for (auto it2 = (*it).begin(); it2 != (*it).end(); ++it2) {
			std::cout << *it2 << " ";
		}
		std::cout << std::endl;
	}

}