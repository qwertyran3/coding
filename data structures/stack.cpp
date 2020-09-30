#include<bits/stdc++.h>


using namespace std;

#define ll long long
#define loop(i,n)  for(ll i=0; i<n; i++)


int const lmt=1e5+5;

struct Stack{

	int t;
	int a[lmt];
	Stack(){
		t=0;
	}

	bool empty(){
		return(t==0);
	}

	void push(int x){
		a[t++]=x;
	}

	int top(){
		return a[t-1];
	}

	void pop(){
		t--;
	}

	int size(){
		return t;
	}
};


int main(){
	#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
	#endif

	Stack s;
	int x;
	loop(i,4){ cin>>x; s.push(x);}

	s.pop();

	cout<<s.top()<<" "<<s.size()<<endl;

}