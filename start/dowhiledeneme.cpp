#include <iostream>
using namespace std;
int main(){
	int sum=0,n,count=0;
	float avg;
	cout<<"  this loop just remember for do-while loops."<<endl;
	cout<<"  now we want you enter a number for n and you see what happen"<<endl;
	do{
		cin>>n;
		if(n>=0){
			sum += n;
			cout<<"  sum = "<<sum<<endl;
			count++;
			cout<<"  count = "<<count<<endl;
			if((count>4)&(count<6))
			cout<<"  okay man you see if your n number is different from negatives this loop goes infinity :)"<<endl;
			
		}
	}
	
	while(n>=0);
	avg = (count)?(float)sum/count:0;
	
	cout<<"  avg = "<<avg<<endl;
	return 0;
}


