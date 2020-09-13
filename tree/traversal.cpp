#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *left;
	node *right;
};

// INORDER(LEFT, ROOT, RIGHT)
void inorder(node *node){
	if(node==NULL) return;

	inorder(node->left);
	cout<<(node->data)<<" ";
	inorder(node->right);
}

// PREORDER(ROOT, LEFT, RIGHT){
void preorder(node *node){
	if(node==NULL) return;

	cout<<(node->data)<<" ";
	preorder(node->left);
	preorder(node->right);

}

// POSTORDER(LEFT, RIGHT, ROOT){
void postorder(node *node){
	if(node==NULL) return;

	preorder(node->left);
	preorder(node->right);
	cout<<(node->data)<<" ";

}

void insert(node *node){
	
}