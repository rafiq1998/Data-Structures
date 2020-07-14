#pragma once
#include <iostream>
#include <stdio.h>
using namespace std;
struct Node
{
	int data;
	Node* next;
	Node(int data)
	{
		this->data = data;
		next = nullptr;
	}
};
class List
{
private:
	Node* head = nullptr;
public:
	List()
	{
		head = NULL;
	}
	void push(int data)
	{
		Node* temp = new Node(data);
		if (head == NULL)
		{
			head = temp;
		}
		else
		{
			Node* thead = head;
			head = temp;
			head->next = thead;
		}
	}
	int pop()
	{
		if (head == NULL)
		{
			cout << " Head is null " << endl;
			return NULL;
		}
		else
		{
			Node* thead = head;
			head = head->next;
			int c = thead->data;
			thead->next = NULL;
			delete thead;
			return c;
		}
	}
	int popLast()
	{
		if (head == NULL)
		{
			cout << " Head is null " << endl;
			return -1;
		}
		else
		{
			Node* previous = head;
			Node* thead = head;
			while (thead->next != NULL)
			{
				previous = thead;
				thead = thead->next;
			}
			previous->next = NULL;
			int c = thead->data;
			delete thead;
			return c;
		}
	}
	int top()
	{
		if (head == NULL)
		{
			return NULL;
		}
		else
		{
			return head->data;
		}
	}
	int size()
	{
		int count = 0;
		Node* temp = head;
		while (temp != NULL)
		{
			count++;
			temp = temp->next;
		}
		return count;
	}
	bool isEmpty()
	{
		if (head == NULL)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	void display()
	{
		Node* temp = head;
		while (temp != NULL)
		{
			cout << temp->data << endl;
			temp = temp->next;
		}
	}
	int checkIfAvailable(int key)
	{
		if (head == NULL) return -1;
		Node* thead = head;
		int sized = size();
		int count = 0;
		for (count = 0; count < sized;count++)
		{
			if (key == thead->data) return count;
			thead = thead->next;
		}
		return -1;
	}

	int deleteAt(int index)
	{
		int sized = size() - 1;
		if (index == -1)
		{
			return -1;
		}
		else if (index == 0)
		{
			int c = pop();
			return c;
		}
		else if (index == sized)
		{
			int c = popLast();
			return c;
		}
		else
		{
			Node* thead = head;
			Node* previous = head;
			for (int count = 0; count < index; count++)
			{
				previous = thead;
				thead = thead->next;
			}
			previous->next = thead->next;
			int c = thead->data;
			delete thead;
			return c;
		}
	}
};



