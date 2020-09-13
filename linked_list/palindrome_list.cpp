#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *next;
};

// by using strings
bool ispalindrome(node *root){
	string s="";
	while(root!=NULL){
		str.append(root-<data);
		root=root->next;
	}
	return ispalindromestr(s);
}

bool ispalindromestr(string s){
	ll n=s.length();
	loop(i,n/2){
		if(s[i]!=s[n-i-1]) return false;
	}
	return true;
}

// by not using any extra space
bool ispalindrome(node *head){
	node *slow=head;
	node *fast=head;

	while(fast!=NULL && fast.next!=NULL){
		fast=fast->next->next;
		slow=slow->next;
	}
	slow=reversed(slow);
	fast=head;
	while(slow!=NULL){
		if(slow.val!= fast.val) return false;
		slow = slow.next;
		fast = fast.next;
	}
	return true;
}