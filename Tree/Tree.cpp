#include <iostream>
#include "BinarySearchTree.h"
#include "RedBlackTree.h"
using namespace std;

int main()
{
	/*
	BinarySearchTree bst;
	bst.insertN(12); bst.insertN(6); bst.insertN(4); bst.insertN(9);
	bst.insertN(11); bst.insertN(20); bst.insertN(18); bst.insertN(44);
	bst.insertN(30); bst.insertN(56);

	bst.Show();
	cout << endl;
	cout << "찾은 값 : " << bst.searchN(56) << endl;

	cout << "4, 44 삭제" << endl;
	bst.deleteNode(4); bst.deleteNode(44);

	bst.Show();
	cout << endl;
	*/

	RBTREE tree;
	// 0 ~ 99 데이터 삽입 (최악의 삽입 시나리오)
	for (size_t i = 0; i < 100; i++)
	{
		tree.Insert(i);
	}
	tree.SelectMenu();

	return 0;
}
