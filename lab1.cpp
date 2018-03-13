
#include <iostream>
#include <cmath>
using namespace std;


/*

Lab(1) is mainly practices for the command of "cin&cout",loop ,and some simple conditonal operator. The main purpose of the lab is to print a string of number by a given input under some condition.The concept of algorithm is as followed:
1. input n
2. print n
3. if n=1 then stop 
4.     	if n is odd then n<-3n+1
5.      else n<- n/2
6.      GO TO 2

*/

int main()
{	
	
	double number_u_selceted;

	do    									 //check whether the user enter an integer or not
		{
		cout<<"please enter a positive integer you like."<<endl;	
		cin>>number_u_selceted;

		if ((floor(abs(number_u_selceted))-number_u_selceted)||(number_u_selceted<=0))
			

		{cout<<"Please enter a POSITIVE INTEGER!!,TRY IT AGAIN!"<<endl;}
				
		}
	
	while (!((floor(number_u_selceted)-number_u_selceted==0)&(number_u_selceted>=0)));
	
	cout<<"the string of number u selceted="<<endl<<number_u_selceted<<" ";

	int number_u_selceted_updated=number_u_selceted;


	while (number_u_selceted_updated!=1)						//use while loop to check when the code should stop 
	{
	
		if (number_u_selceted_updated%2!=0)					//use if condition to update our input into corrosponding form
		{
			number_u_selceted_updated=3*number_u_selceted_updated+1;
			cout<<number_u_selceted_updated<<" ";
		}
		else 
		{	
			number_u_selceted_updated/=2;
			cout<<number_u_selceted_updated<<" ";
			
		}
	}

cout<<endl<<"thank for ur participation ^_^";

return 0;
}
	

