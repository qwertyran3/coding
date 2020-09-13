#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *next;
};

void print(node *root){
	while(root!=NULL){
		cout<< root->data <<" ";
		root=root->next;
	}
	cout<<endl;
}
node insert(node *head,int val){
    if(!head){
        head=new node();
        head->data=val;
        last=head;
        return head;
    }
    else{
        p=last;
        p->next=new node();
        p->next->data=val;
        last=p->next;
        return head;
    }
}


int main(){

	#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
	#endif

    node *head=NULL;
    

    int n,val;
    cin>>n;
    while(n--){
       cin>>val;
       insert(head,val);
    }

    print(head);

}