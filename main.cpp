
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	while(1>0){
		
	
    string a;   
	 cout<<"ENTER MESSAGE TO BE ENCRYPTED: ";
	 cin>>a;
	
    
    for(int i=0; i<a.length(); ++i){
    if(a[i]=='d')
    	cout<<4<<" ";
	else if(a[i]=='e')	
    	cout<<5<<" ";
	else if(a[i]=='p')
	 cout<<16<<" ";
	else if(a[i]=='a')	
    	cout<<1<<" ";
	else if(a[i]=='b')
	 cout<<2<<" ";
	else if(a[i]=='c')	
    	cout<<3<<" ";
	else if(a[i]=='f')
	 cout<<6<<" ";
	else if(a[i]=='g')	
    	cout<<7<<" ";
	else if(a[i]=='h')
	 cout<<8<<" ";
	else if(a[i]=='i')
	 cout<<9<<" ";
	else if(a[i]=='j')	
    	cout<<10<<" ";
	else if(a[i]=='k')
	 cout<<11<<" ";
	else if(a[i]=='l')	
    	cout<<12<<" ";
	else if(a[i]=='m')
	 cout<<13<<" "; 
	else if(a[i]=='n')
	 cout<<14<<" ";
	else if(a[i]=='o')	
    	cout<<15<<" ";
	else if(a[i]=='q')
	 cout<<17<<" ";
	else if(a[i]=='r')	
    	cout<<18<<" ";
	else if(a[i]=='s')
	 cout<<19<<" "; 
	else if(a[i]=='t')
	 cout<<20<<" ";
	else if(a[i]=='u')	
    	cout<<21<<" ";
	else if(a[i]=='v')
	 cout<<22<<" ";
	else if(a[i]=='w')	
    	cout<<23<<" ";
	else if(a[i]=='x')
	 cout<<24<<" "; \
	else if(a[i]=='y')	
    	cout<<25<<" ";
	else if(a[i]=='z')
	 cout<<26<<" "; 
}
cout<<"\n";
}
cout<<"\n";
  system("pause");
		return 0;
}


