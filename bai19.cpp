#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	float F,after;
	cin >>F;
	after=(int)F%100;
	F=F-after;
	cout << after  << endl;
	cout <<  setprecision(2) << fixed << F;
	
}
