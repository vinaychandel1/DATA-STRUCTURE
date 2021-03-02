#include <stdio.h>

using namespace std;

void insertionsort(int arr[],int size){
int value,index;
for (int i = 1; i < size; ++i)
{
	value=arr[i];
	index=i;
	while(index>0 && arr[index-1]>value){
		arr[index]=arr[index-1];
		index--;
	}
	arr[index]=value;
}
for (int i = 1; i < size; ++i)
{
     printf("%d,",arr[i]);
}


}

int main(int argc, char const *argv[])
{
	int arr[]={5,7,3,7,2,8,9,1,2,10};
	int size=sizeof(arr)/sizeof(arr[0]);
	insertionsort(arr,size);
	return 0;
}

/*Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands. The array is virtually split into a sorted and an unsorted part. Values from the unsorted part are picked and placed at the correct position in the sorted part.
Algorithm 
To sort an array of size n in ascending order: 
1: Iterate from arr[1] to arr[n] over the array. 
2: Compare the current element (key) to its predecessor. 
3: If the key element is smaller than its predecessor, compare it to the elements before. Move the greater elements one position up to make space for the swapped element.*/
