#include<iostream>
using namespace std;
int main(){
	int n;// độ rộng của mảng	cout << " moi nhap vao do rong cua mang : ";
	cin >> n;
	int A[n];
    int dem ,sum ;// cho gia trị chẵn 
	 dem = 0;
	 sum = 0;
	int dem1 ,sum1;// cho giá trị lẻ 
	 dem1 = 0;
	 sum1 = 0;
	 
	 
	//1.nhap gia tri cho mang
	for(size_t i=0;i<sizeof(A)/sizeof(int);i++){
		cin >> A[i];
	}
	
	// 2. in ra số lượng chẵn và tính tổng chẵn 
	
	for(size_t i=0;i<sizeof(A)/sizeof(int);i++){
		if(A[i]%2==0){
			dem =dem+1;
			sum =sum+A[i];
		
		}
	}

	// 3 .in ra số lượng lẻ và tính tổng lẻ 

	for(size_t i =0;i<sizeof(A)/sizeof(int);i++){
		if(A[i]%2!=0){
			dem1 =dem1+1;
			sum1=sum1+A[i];
		
		}
	}

		cout  << dem << endl;
		cout  << dem1<< endl;
		cout  <<sum << endl;
		cout  <<sum1<<endl;
	
	
	return 0;
	
}
