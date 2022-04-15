//wap where user enters hours and minutes and seconds and the output is displayed in seconds
#include<iostream>
using namespace std;
 
  class timeconversion
  {
    	int hrs,min,sec,convert;
  	public:
  		timeconversion(int h,int m,int s)
  		{  
  		       //int convert;
  		        hrs=h;
				  min=m;
				  sec=s;
				  
				
		  }
		   operator int()
		  {
		  	cout<<"time in seconds: ";
		  	 return convert=(hrs*3600)+(min*60)+(sec);	
		  }
		 /* void display()
		  {
		  	cout<<"TIme in seconds:"<<convert;
		  } */
		  
  };
  
  /*int main()
  {
  	 int hours,minutes,seconds,duration;
  	 
  	 cout<<"ENter time in hours , minutes and seconds"<<endl;
  	 cin>>hours>>minutes>>seconds;
  	 
  	 timeconversion t(hours,minutes,seconds);
  	 duration=t.operator int();
  		cout<<"TIme in seconds:"<<duration;

  	
  	return 0;
  }*/
