#pragma once

struct Node
{
	int key;
	int height;
	Node* left;
	Node* right;
	Node(int key)
	{
		height = 1;
		this->key = key;
		right = nullptr;
		left = nullptr;
	}
};
class Tree
{
public:
	Node* root = nullptr;
	Node* insert(Node* node, int key);
	Node* newNode(int key);
	void preOrder(Node* node);
	Node* leftRotation(Node* node);
	Node* rightRotation(Node* node);
	int getBalance(Node* node);
private:
	int height(Node* node);
	int max(int a, int b);
};



