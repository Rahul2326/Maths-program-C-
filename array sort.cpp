#include <iostream>
#include <algorithm>
using namespace std;


int main(){
long array[20];
for(int k=0;k<20;k++){
	int n;
	cin>>n;
	array[k]=n;
}	
	for(int i=0;i<20;i++){
		for(int j=i+1;j<20;j++){
			if(array[i]>array[j]){
				int temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
	
	for(int k=0;k<20;k++){
		cout<<array[k]<<"  ";
	}
	
	return 0;
}
