#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *next;
};
reverse(node *head){
	node *current, *prev, *new;
	current=head;
	prev=NULL;
	while(current!=NULL){
		new=current->next;
		current->next=prev;
		prev=current;
		current=new;
	}
	head=prev;
}