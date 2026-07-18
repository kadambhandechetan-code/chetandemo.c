#include<stdio.h>

  void add()
  {
  	int a,b;
  	printf("Enter two number");
  	scanf("%d%d", &a,&b);
  	
   	printf("addition=%d\n", a+b);
   }
  void sub()
  {
    int a,b;
    printf("Enter two number");
    scanf("%d%d", &a,&b);
    
    printf("subtraction=%d\n", a-b);
  }
   void mul()
  {
  	int a,b;
  	printf("Enter two number");
  	scanf("%d%d", &a,&b);
  	
  	printf("multiplication=%d\n", a*b);
  }
  void tabel()
  {
  	int n,i;
  	printf("Enter number:");
  	scanf("%d", &n);
  	
  	for(i=1;i<=10;i++)
  	{
  		printf("%d\n",n*i);
	  }
  		
  }
  void evenodd()
  {
  	int n;
  	
  	printf("Enter number:");
  	scanf("%d", &n);
  	
  	if (n%2==0)
  	printf("Even number");
  	else
  	printf("Odd number");
  }
  void cube()
  {
  	int n;
  	printf("Enetr number:");
  	scanf("%d",&n);
  	
  	printf("cube=%d\n",n*n*n);
  }
  void square()
  {
  	int n;
  	printf("Enter number:");
  	scanf("%d", &n);
  	
	printf("square=%d\n",square);
 }
 int main()
  {
	
  	add();
  	sub();
  	mul();
  	tabel();
  	evenodd();
  	cube();
  	square();
    
    return 0;
  }
  
      

  
  
    