#include<iostream>
using namespace std;
main()
{   
	bool isPrime= true;
	int num;
	cout<<"Enter a number to check if its a prime numeber or not: ";
	cin>>num;
	
	if(num==0 || num==1)  // check for number 1 and 2 
	{
		isPrime=false;
	}
	else if(num==2)
	{
		isPrime=true;
	}
	  
	else
	{
		for(int i=2; i<num;i++) // for(int i=num-1; i>=2; i--)
		{
			if(num%i==0)
			isPrime=false;
			break;
		}
	}		
	
	if(isPrime==true)
		cout<<"Entered number is Prime";
	else
		cout<<"Entered number is not Prime";
}
	
		
		
	
	
