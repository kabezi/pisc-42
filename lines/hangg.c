/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hangg.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvirolai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 11:24:27 by kvirolai          #+#    #+#             */
/*   Updated: 2020/02/09 10:53:30 by kvirolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <signal.h>

 int main(void)
    {
        char hangmanWord[100], tempWord[100];      
        char hangmanOutput[100];                    
        int wrongTry = 6 , matchFound = 0;         
        int tries = 0;                             
        int counter = 0 , position = 0, winner, length , i;
        char alphabetFromUser;
        scanf("%s",hangmanWord);
        
        getchar();
        length = strlen(hangmanWord);
        
         for( i = 0; i < length ; i++)
        {   
            hangmanOutput[i] = '_';
            hangmanOutput[length] = '\0';
        }
        
        for(i = 0 ; i < length ; i++)
        
        {   
    		
    		if(i==0){
    		printf("%c",hangmanWord[0]);
    		
    		}
    		
            printf("%c",hangmanOutput[i]);  //line output 
             
             if(i==length-1){
    			 printf("(%d)",tries);
    		 }
    		 
        }
        
        while(wrongTry != 0)                        /**while loop for exiting the program when no try left**/
        {
            matchFound = 0;
            putchar('\n');
            printf("letter: ");
            scanf("%c",&alphabetFromUser);
            fflush(stdin);
            if (matchFound != 2)
        {
            for(counter=1;counter<length;counter++)    /**for loop to check whether player input alphabet exists or not in the word**/
    	    {
    		
    			if(isupper(hangmanWord[counter])){
                     
                    hangmanWord[counter] = tolower(hangmanWord[counter]);
                     }
              
    		    if(alphabetFromUser==hangmanWord[counter])
    		     {
    		       matchFound = 1;
                         }//end of if()
                }//end of
        
         if(matchFound == 0)                      /**in case of wrong guess**/
    	    {
         	     wrongTry--;
         	     tries++;
    	    }//en
        else
    	   {
    	     for(counter = 0; counter < length; counter++)
                 {
                     matchFound = 0;
                     if(alphabetFromUser == hangmanWord[counter])
    	          {
         		     position = counter ;
         		     matchFound = 1;
    	          }//end of if
        	      if(matchFound == 1)
    	          {
                     for(i = 0 ; i < length ; i++)
                     {
                          if( i == position)
                      	  {
                              hangmanOutput[i] = alphabetFromUser; /**Put the alphabet at right position**/
                          }
                          else if( hangmanOutput[i] >= 'a' && hangmanOutput[i] <= 'z' ) /** If the position already occupied
                                                                                      by same alphabet then no need to
                                                                                      fill again EASY!! and continue */
                          {
                              continue;
                      	  }
    
                          else
                          {
                              hangmanOutput[i] = '_';            /** Put a underscore at not guessed alphabet position **/
                          }
                    }
                    
                     tempWord[position] = alphabetFromUser;      /**put the alphabet in another char array to check with the original word**/
                    tempWord[length] = '\0';   
                                 /**put the NULL character at the end of the temp string**/
                    winner = strcmp(tempWord+1,hangmanWord+1);      /**upon True comparison it will return 0**/
    
                    if(winner == 0)                             /**if the player guessed the whole word right then he/she is the WINNER**/
                    {
                        for(i = 0 ; i < length ; i++)
        
        {   
    		if(i==0){
    		printf("%c",hangmanWord[0]);
    		
    		}
    		
            printf("%c",hangmanOutput[i+1]);  //line output  
             if(i==length-1){
    			 printf("(%d)",tries);
    		 }
        }     
                        getchar();
                        return 0;
                    }//end of inner if
    	       }//end of outer if
    	    }//end of for loop
          }//end of else
        } // end of if(matchFound != 2) condition
   
    for(i = 0 ; i < length ; i++)
        {   
    		if(i==0){
    		printf("%c",hangmanWord[0]);
    		
    		}
    	
            printf("%c",hangmanOutput[i+1]);  //line output  
             if(i==length-1){
    			 printf("(%d)",tries);
    		 }
        }
        getchar();
        }
              if(wrongTry <= 0)                                 /**if the player can not guess the whole word in 5 chaces**/
          {
    		  putchar('\n');
              printf("DEAD\n");
              return 0;
          }
    getchar();
        return 0;
