#include <stdio.h>


int main(){
	
	/*  A variable called numbers is defined to find prime numbers. 
	   2 is assigned to numbers what minimum prime number. 
	   value defined to get a value from user. */
	int numbers=2, value;
	
	    //"Enter a value" is pressed the screen to get a value from user.
    	printf("Enter a value");
    	//The value from user is assigned to value variable.
	    scanf("%d", &value);
	    
	//numbers is increased until numbers<=value
	for(; numbers<=value; numbers++){
		
	   /*numberTwo is defined to audit each numbers those are a prime number.
	   indicator is defined to determine when a number is a prime number*/
	   int numberTwo=2, indicator=0;
	   
	    //numberTwo is increased until numberTwo<=numbers-1
		for(numberTwo; numberTwo<=numbers-1; numberTwo++){
			
		   /*if numbers%numberTwo=0 then indicator is 1 and loop finishs.
		     Because when numbers%numberTwo=0 that 'numbers' is not prime number.*/
		   if(numbers%numberTwo==0){
		   	  indicator=1;
		   	  break;
		    }
	    }
	    
	    /*if indicator is not 1 (then indicator is 0) then that 'numbers' is a prime number 
		  and that 'numbers' is pressed to the screen.*/
	    if(indicator==0){
		  printf("%d",numbers);	
	    }
	}
}
	
	

