#include<iostream>
 using namespace std;
 
 class time
 {
 	int hrs,min,sec;
 	public:
 		time(int t)
 		{
 			 int m;
			 hrs=t/3600;
 		   
 		    m=t%3600;
 		    min=m/60;
 		    sec=m%60;
			 	
		 }
		 void display()
		 {
		 	cout<<"|Hours :: "<<hrs<<" |Minutes :: "<<min<<" |Seconds :: "<<sec<<"|";
		 }
 };
 
 int main()
 {
 	int seconds;
 	
 	cout<<"enter time in seconds"<<endl;
 	cin>>seconds;
 	
 	time t(seconds);
 	t.display();
 	
 	return 0;
 }
