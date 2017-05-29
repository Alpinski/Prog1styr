#pragma once
#include "DynamicArray.h"
#include "GraphNode.h"
#include <iostream>
#include "Renderer2D.h"
#include "Stack.h"

template<typename T>
class Graph
{

public:
	Graph()
	{
		m_bTraversed = false;
	}
	~Graph() {}

	void Insert(GraphNode<T>* node)
	{
		m_Nodes.pushBack(node);
	}
	void Remove(GraphNode<T>* node);
	void Remove(T data);


	void DrawGraph(aie::Renderer2D* m_2drenderer)
	{
		for (int i = 0; i < m_Nodes.Size(); ++i)
		{
			m_Nodes[i] -> bTraversed
		}

		stack<GraphNode<T>*> stack;
		stack.Push(m_Nodes[0]);

		while (!stack.IsEmpty())
		{
			GraphNode<T>* > current = stack.Pop();
			current->m_bTraversed = true;

			std:: cout 
		}
	}


		void setTraversed(bool bTraversed)
		{
			return bTraversed;
		}
private:
	DynamicArray<GraphNode<T>*> m_Nodes;

};

