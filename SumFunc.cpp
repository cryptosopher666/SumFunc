#include<iostream>
#include<conio.h>
using namespace std;
int sum(int,int);

int main(){
	int a,b;
	cout<<"Enter two numbers: "<<endl;
	cin>>a>>b;
	cout<<sum(a,b);
	getch();
	return 0;
}
int sum(int a, int b){
	if(b==0)
	return a;
	else if(b<0)
	return sum(a,b+1)-1;
	else
	return sum(a,b-1)+1;
}
