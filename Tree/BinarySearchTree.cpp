#include "BinarySearchTree.h"

void BinarySearchTree::insertNode(Node*& T, int Key)
{
	if (T == nullptr)
	{
		T = new Node();
		T->key = Key;
	}
	else if (T->key >= Key)
	{
		insertNode(T->LchildNode, Key);
	}
	else
	{
		insertNode(T->RchildNode, Key);
	}
}

void BinarySearchTree::deleteNode(int Key)
{
	Node*& deleteNode = search(rootNode, Key);
	if (deleteNode == nullptr)
	{
		return;
	}
	else if (deleteNode->key == Key)
	{
		// case 1 단말노드일 경우
		if (deleteNode->LchildNode == nullptr && deleteNode->RchildNode == nullptr)
		{
			Node*& temp = deleteNode;
			deleteNode = nullptr;
			delete temp;
		}
		// case 2 하나의 자식 노드를 가진 경우
		else if (deleteNode->RchildNode == nullptr)
		{
			Node*& temp = deleteNode;
			deleteNode = deleteNode->LchildNode;
			delete temp;
		}
		else if (deleteNode->LchildNode == nullptr)
		{
			Node*& temp = deleteNode;
			deleteNode = deleteNode->RchildNode;
			delete temp;
		}
		// case 3 두 자식 노드를 가진 경우
		else
		{
			rightLeftDelete(deleteNode->RchildNode, &deleteNode->key);
		}
	}
}

void BinarySearchTree::rightLeftDelete(Node*& T, int* Key)
{
	if (T->LchildNode == nullptr)
	{
		Node*& temp = T;
		*Key = T->key;
		T = T->RchildNode;
		delete temp;
		temp = nullptr;
	}
	else
	{
		rightLeftDelete(T->LchildNode, Key);
	}
}

Node*& BinarySearchTree::search(Node*& T, int Key)
{
	if (T == nullptr)
	{

	}
	if (T->key == Key)
	{
		return T;
	}
	else if (T->key >= Key)
	{
		return search(T->LchildNode, Key);
	}
	else
	{
		return search(T->RchildNode, Key);
	}
}

void BinarySearchTree::ShowTreeInorder(Node*& T)
{
	if (T != nullptr)
	{
		cout << T->key << " ";
		if (T->LchildNode != nullptr)
		{
			ShowTreeInorder(T->LchildNode);
		}
		if (T->RchildNode != nullptr)
		{
			ShowTreeInorder(T->RchildNode);
		}
	}
}
