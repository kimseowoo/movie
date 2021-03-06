#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "movie.h"

typedef struct movInfo{
	char name[200];
	float score;
	int runTime;
	char madeIn[10];
} movInfo_t;				//movInfo 구조체 변수 선언 


void* mv_genMvInfo(char* name, float score, int runTime, char* country)
{
	movInfo_t* mvPtr; // 구조체 포인터 선언
	
	
	mvPtr = (movInfo_t*)malloc(sizeof(movInfo_t));//allocate memory and set the member variables


	
		
	return (void*)mvPtr;
}

void mv_print(void* obj)
{
	movInfo_t* mvPtr = (movInfo_t*)obj;
	
	if (mvPtr == NULL)
	{
		printf("[ERROR] failed to print the movie Info! (object is NULL)\n");
	}
	
	printf("Name : %s (%s)\n", mvPtr->name, mvPtr->madeIn);
	printf("running time : %i, score : %f\n", mvPtr->runTime, mvPtr->score);
	
	return;
}


//return the score value from the input instance of movInfo_t structure
float mv_getScore(void* obj)
{
	fp = fopen("movie.dat","r");  

	while (fgets(score, 10,fp)!=NULL)
	{
		if(strcmp(input, score)==0)
		{
			printf("")
		}
	
	}
}

//return the runtime value from the input instance of movInfo_t structure
int mv_getRunTime(void* obj)
{
	fp = fopen("movie.dat","r");  

	while (fgets(runtime,10,fp)!=NULL)
	{
		if(strcmp(input, runtime)==0)
		{
			printf("")
		}
	
	}
}

//return the name string pointer from the input instance of movInfo_t structure
char* mv_getName(void* obj)
{
	fp = fopen("movie.dat","r"); 

	while (fgets(name, 100,fp)!=NULL)
	{
		if(strcmp(input, name)==0)
		{
			printf("")
		}
	
	}
}

//return the country string pointer from the input instance of movInfo_t structure
char* mv_getCountry(void* obj)
{
	fp = fopen("movie.dat","r"); 

	while (fgets(country, 10,fp)!=NULL)
	{
		if(strcmp(input, county)==0)
		{
			printf("")
		}
	
	}
}



