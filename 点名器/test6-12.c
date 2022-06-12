#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdlib.h>
typedef struct student
{
	char num[20];
	char name[20];

}student;
int main()
{
	srand((int )time(NULL));
	FILE* tmp = fopen("学生名单.txt","r");
	if (!tmp)
		exit(-1);
	student ID[37] = {"0","0"};
	for(int i=0;i<37;i++)
	fscanf(tmp,"%s%s",ID[i].num,ID[i].name);
	
	int j = rand() % 38;
		printf("%s %s\n",ID[j].num,ID[j].name);
	return 0;
}