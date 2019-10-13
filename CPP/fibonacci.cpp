#include<bits/stdc++.h>
using namespace std;

int main(){
	int n = 10; //no of terms in series
	int a = 1, b = 1, c;
	cout<<"series is : ";
	cout<<a<<" "<<b<<" ";

	for(int i = 1; i <= n-2; i++){
		c = a + b;
		cout<<c<<" ";
		a = b;
		b = c;
	}
	cout<<endl;
}