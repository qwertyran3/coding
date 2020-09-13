#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *next;
};

void delete(node *p){

	q=p->next;
	p->next=q->next;
	free(q);
}
void delete(int n){
	node *root1=head;
	if(n==1){
		head=root1->next;
		free(root1);
	}
	loop(i,n-1){
		root1=root1->next;
	}
	node* root2=root1->next;
	root1->next=root2->next;
	free(root2);
}
void deletefromend(){
	node* last;
	temp=head;
	while(temp!=NULL){
		last=temp;
		temp=temp->next;
	}
	if(temp==head){
		head=0;
	}
	else{
		root->next=0;
	}
	free(temp);
}
// for traversing 
loop(i,n-2){
	root=root->next;
}
int main(){

	#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
	#endif

}    