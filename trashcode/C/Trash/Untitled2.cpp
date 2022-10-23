#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_array(int arr[],int n);
void sort_array(int arr[],int n);
float mean_array(int arr[],int n);
int mode_array(int arr[],int n);
int find_number_of_x(int arr[],int x,int n);
int median_array(int arr[],int n);

int main() {
	srand(time(NULL));
	int arr[99],n=99,median,mode;
	float mean;
	fill_array(arr,n);
	mean=mean_array(arr,n);
	mode=mode_array(arr,n);
	median=median_array(arr,n);
	printf("The mean of set is:\n",mean);
	printf("The mode of set is:\n",mode);
	printf("The median of set is:\n",median);
	return 0;
}
void sort_array(int arr[],int n)
{
	int i,j,k,temp;
	for(i=0;i<n;i++)
	{
	    k=i;	
		for(j=i+1;j<n;j++)
		     if(arr[j]<arr[k]) k=j;
		temp=arr[i];arr[i]=arr[k];arr[k]=temp;
	}
	return;
}

void fill_array(int arr[], int n){
	int i, random;
	
	for (i=0; i<n; i++){
		random = (rand() % 10) +1 ;
		arr[i] = random;
	}
}

float mean_array(int arr[],int n){
	float sum = 0; 
	int i;
	
	for (i=0; i<n; i++){
		sum+= arr[i];
	}
	return sum / n;
}
int find_number_of_x(int arr[],int x,int n){
	int val = 0, i;
	
	for (i=0; i<n; i++){
		if (arr[i] == x)
			val++;
	}
	return val;
}

int median_array(int arr[],int n){
	sort_array(arr,n);
	
	return arr[n/2];
}
