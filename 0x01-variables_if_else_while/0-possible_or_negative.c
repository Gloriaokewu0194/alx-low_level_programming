nclude <stdlib.h>                                                                                                        
#include <time.h>                                                                                                          
#include <stdio.h>                                                                                                         
                                                                                                                           
/**                                                                                                                        
 *  * * main - prints a random number and state whether                                                                       
 *  * * it is positive, negative, or zero                                                                                     
 *  * * Return: Always 0                                                                                                      
 *  */                                                                                                                        
                                                                                                                           
int main(void)                                                                                                             
{                                                                                                                          
	        int n;                                                                                                             
		                                                                                                                           
		        strand(time(0));                                                                                                   
		                                                                                                                           
		        n = rand() - RAND_MAX / 2;                                                                                         
		                                                                                                                           
		        if (n > 0)                                                                                                         
		                                                                                                                           
		                printf("%d is positive\n", n);                                                                             
		                                                                                                                           
		        else if (n < 0)                                                                                                    
		                                                                                                                           
		                printf("%d is negative\n", n);                                                                             
		                                                                                                                           
		        else                                                                                                               
		                                                                                                                           
		                printf("%d is zero\n", n);                                                                                 
		                                                                                                                           
		        return (0);                                                                                                        
}                                                                                                                          
                                
