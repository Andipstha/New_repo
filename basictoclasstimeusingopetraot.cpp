//basic to class for time in to seconds conversiom using constructot
#include<iostream>
 using namespace std;
 
 class time
 {
 	int hrs,min,sec;
 	public:
 	void operator =(int t)
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
 	time obj;
 	int seconds;
 	
 	cout<<"enter time in seconds"<<endl;
 	cin>>seconds;
 	
 	obj=seconds;
 //	time t(seconds);
 	obj.display();
 	
 	return 0;
 }
