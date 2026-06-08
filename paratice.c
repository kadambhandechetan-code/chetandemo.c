//Assignment 0
// 10 write a C program to input marks of five subjects, find total marks,and calculate the percentage.
#include<stdio.h>

    int main()
{
    int sub1,sub2,sub3,sub4,sub5,Total;
    float percentage;
	
  	 printf("Enter marks of 5 subject: ");
  	 scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
  	 
  	 Total= sub1 + sub2 + sub3 + sub4 + sub5;
  	 
  	 percentage=(400/500)*100;
  	 
  	 printf("total marks=%d/n",Total);
  	 printf("percentage= %.2f","percentage");
  	 
  	 
  	
	  
	return 0;
  }
