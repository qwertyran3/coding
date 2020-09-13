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

int main(){

	#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
	#endif
    

    node n1;
    n1.data=1;
    n1.next=new node();

    node *ans=n1.next;
    int n;
    cin>>n;
    int l;

    

    for(int i=1; i<n; i++){
    	cin>>l;
    	if(i==n-1){
    		ans->data=l;
    		ans->next=NULL;
    		continue;
    	}
    	ans->data=l;
    	ans->next=new node();
    	ans=ans->next;
    	

    }

   
    print(&n1);

	
}