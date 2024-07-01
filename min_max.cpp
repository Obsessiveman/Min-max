#include <iostream>
#include<algorithm>  
#include<stdlib.h>
using namespace std;
int comp_max(int a, int b)   
{   
    if(a < b){
    	return b;
	}
	else if(a > b){
		return a;
	}  
}  
int comp_min(int a, int b)   
{   
    if(a < b){
    	return a;
	}
	else if(a > b){
		return b;
	}   
}
int main()
{
setlocale(LC_ALL,"Turkish"); //Türkçe karakter
int x,y,min,max,remain;
cout<<"Specify two integers to find their GCD: "<<" \n";
cout<<"x: ";
cin>>x;
cout<<"y: ";
cin>>y;
max=comp_max(x, y);
min=comp_min(x, y);
while(true){
	if(min == 0){
		cout<<"GCD: "<<max;
		break;
		}
	else if (min > 0){
		remain = max % min;
		cout<<max<< " % "<<min<<" => "<<remain<< " \n";
		max = min;
    	min = remain;
	}
}
return 0;
}
