#include<bits/stdc++.h>
using namespace std;
int i = 0;
void move(int n,char batdau,char ketthuc,char trunggian){
	if(n==1){
		cout << "Chuyen dia tu " << batdau << " ---> " << ketthuc << endl; 
	}else{
		move(n-1,batdau,trunggian,ketthuc);
		move(1,batdau,ketthuc,trunggian);
		move(n-1,trunggian,ketthuc,batdau);
	}
}
int main(){
	int n;
	cin >> n;
	move(n,'1','3','2');
	
}