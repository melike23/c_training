#include <stdio.h>

int main(){
	
//value is defined to get a value from user. firstNumber is defined to determine first number.
int value, firstNumber;
//selection is defined what user selects odd numbers or even numbers.
char selection;

// I want a selection from user who will press 'o' for odd numbers or 'e' for even numbers.
printf(" press\n for odd numbers 'o'\n\
 for even numbers 'e'");
//users's selection is assigned to selection variable.
scanf("%c", &selection);

//pressing to the screen "Enter a value" to take a value from user.
printf("Enter a value");
//user's value is assigned to value variable.
scanf("%d", &value);

//if user selected 'o' then firstNumber is 1. Because user selected odd numbers and minimun odd number is 1.
if(selection=='o'){

   //loop is continued until firstNumber<=value. Because the program is pressed odd or even numbers until user's entering value.
   for(firstNumber=1; firstNumber<=value; ){
   	   
   	   //when user select 'o' then program should begin 1.
	   printf("%d", firstNumber);
	   //when program begins 1 then we can find odd numbers with this formule.
	   firstNumber=firstNumber+2;
    }
}
//if user selected 'e' then firstNumber is 2. Because user selected even numbers  minimun even number is 2.
else if(selection=='e'){
	   
	   //loop is continued until firstNumber<=value. Because the program is pressed odd or even numbers until user's entering value.
       for(firstNumber=0; firstNumber<=value; ){
       	   
       	   //when user select 'e' then program should begin 2.
	       printf("%d", firstNumber);
	       //when program begins 2 then we can find even numbers with this formule.
	       firstNumber=firstNumber+2;
        }
}
}

