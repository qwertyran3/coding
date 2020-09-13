#include<bits/stdc++.h>

#define ll long long

using namespace std;

int const lmt=1e5+5;

struct stack{
	int t;
	int a[lmt];
	stack(){
		t=0;

	}

    bool empty(){
		return(t==0);
	}
	int top(){
		return a[t-1];
	}
	push(int x){
		a[t++]=x;
	}
	pop(){
		t--;
	}
	int size(){
		return t;
	}

	


}
