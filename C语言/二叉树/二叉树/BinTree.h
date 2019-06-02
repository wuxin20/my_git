#pragma once


typedef int BTDataType;

typedef struct BTNode
{
	struct BTNode* pLeft;
	struct BTNode* pRight;
	BTDataType data;

}BTNode;

BTNode* CreateBinTree(BTDataType* array, int size);
BTNode* CopyBinTree(BTNode* pRoot);
void DestroyBInTree(BTNode** pRoot);

//二叉树的三种遍历方式
void PreOrde(BTNode* pRoot);
void PreOrderNor(BTNode* pRoot);
void InOrder(BTNode* pRoot);
void PostOrder(BTNode* pRoot);
void PostOrderNor(BTNode* pRoot);
void LevelOrded(BTNode* pRoot);
int GetNodeCount(BTNode* pROot);
int Height(BTNode* pRoot);
int IsBalanceTree(BTNode* pRoot);
int IsBAlabceTree_P(BTNode* pRoot, int* height);
int GetLeafNodeCount(BTNode* pRoot);
int GetLeavelNodeCount(BTNode* pRoot, int k);
BTNode* GetNodeParent(BTNode* pRoot, BTNode* pNode);
BTNode* GetNode(BTNode* pRoot, BTDataType data);
void Mirror(BTNode* pRoot);

