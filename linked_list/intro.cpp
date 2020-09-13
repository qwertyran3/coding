#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *next;
};

void print(node *root){
	while(root!=NULL){
		cout<<root->data<<endl;
		root=root->next;
	}
	cout<<endl;
}

int main(){
	node* head=NULL;
	node* second=NULL;
	node* third=NULL;

	head=new node();
	second=new node();
	third=new node();

	head->data=1;
	head->next=second;

	second->data=2;
	second->next=third;

	third->data=3;
	third->next=NULL;

	print(head);
}