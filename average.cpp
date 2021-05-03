#include <iostream>
using namespace std;

float average;

void puan(float midterm, float final)	
 {
  midterm *= 0.4;
  final *= 0.6;
  average = midterm + final;
  cout<<"  Average: "<<average<<endl;
 }
 
 int main()
 {
 	float midterm, final;
 	cout<<"  Midterm: ";
 	cin>>midterm;
 	cout<<"  Final: ";
 	cin>>final;
 	puan(midterm ,final);
 	
    if(average>=95) cout<<"  letter grade = AA";
	else if(average>=90) cout<<"  letter grade = BA+";
	else if(average>=85) cout<<"  letter grade = BA";
	else if(average>=80) cout<<"  letter grade = BB+";
	else if(average>=75) cout<<"  letter grade = BB";
	else if(average>=70) cout<<"  letter grade = CB+";
	else if(average>=65) cout<<"  letter grade = CB";
	else if(average>=60) cout<<"  letter grade = CC+";
	else if(average>=55) cout<<"  letter grade = CC";
	else if(average>=50) cout<<"  letter grade = DC";
	else if(average>=45) cout<<"  letter grade = DD";
	else if(average>=40) cout<<"  letter grade = FD";
	else cout<<" letter grade = FF";
	
	if(average>= 45) 
	cout<<endl<<"  You pass";
	else 
	cout<<endl<<"  You fail ";
 	return 0;
 }
