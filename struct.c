#include<stdio.h>
#include<string.h>

struct fan
{
	int id;
	char brand[20];
	char name[20];
	float price;
	char color[20];

};
int main()
{
	struct fan s1;
	
	s1.id=1;
    strcpy(s1.brand, "Beladfan=3");
	strcpy(s1.name,"bajaj");
	s1.price=4000;
	strcpy(s1.color,"red");
	
	printf("Id = %d\n", s1.id);
	printf("Brand=%s\n",s1.brand);
	printf("name=%s\n",s1.name);
	printf("price=%.2f\n",s1.price);
	printf("color=%s\n",s1.color);

	return 0;
	
}