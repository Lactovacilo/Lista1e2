#include <iostream>  
using namespace std;  
int main(){
	setlocale (LC_ALL, "portuguese");
	
	int n, i, a[8];
	 
	cout << "Digite um n�mero para convert�-lo:\n";    
	cin >> n;
	  
	for(i=0; n>0; i++){    
		a[i]=n%2;    
		n= n/2;  
	}
	
	cout<<"Bin�rio: ";    
	for(i=i-1 ;i>=0 ;i--){    
		cout<<a[i];    
	}    
}  
