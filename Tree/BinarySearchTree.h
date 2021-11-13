#pragma once
#include <iostream>
using namespace std;

struct Node
{
	int key;
	Node* LchildNode = nullptr;
	Node* RchildNode = nullptr;
};
class BinarySearchTree
{
	Node* rootNode;
	void insertNode(Node*& T, int Key);
	void rightLeftDelete(Node*& T, int* Key);
	Node*& search(Node*& T, int Key);
	void ShowTreeInorder(Node*& T);
public:
	BinarySearchTree() : rootNode(nullptr) {}
	void insertN(int Key) { insertNode(rootNode, Key); }
	void deleteNode(int Key);
	int searchN(int Key) { Node* temp = search(rootNode, Key); return temp != nullptr ? temp->key : -1; }
	void Show() {ShowTreeInorder(rootNode);}
	
};

