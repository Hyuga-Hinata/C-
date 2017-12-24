#include<stdlib.h>
#include<iostream>
#include<algorithm>
using namespace std;
/*Partation the data
array: the data to be sorted
low: the initial location
high: the end location*/
int Partition(int *array,int low,int high)
{
    int k=low+rand()%(high-low+1);  					//get a randomized baseline data
    int tmp;  
    tmp=array[k];array[k]=array[low];array[low]=tmp;	//put the baseline data on the first location
    int key=array[low];
    while(low<high){  									
        while(low<high&&array[high]>key) high--;  		//Find the first element smaller than key from end to start.
        array[low]=array[high];  
        while(low<high&&array[low]<key) low++;  		//Find the first element larger than key from start to end.
        array[high]=array[low];  
    }  
    array[low]=key;  
    return low;
}
/*quick sort function
array: the data to be sorted
low: the initial location
high: the end location*/ 
void qsort(int *array,int low,int high)
{  
    if(low<high){  
        int po=Partition(array,low,high);
        qsort(array,low,po-1);							//Sort the element smaller than key
        qsort(array,po+1,high);  						//Sort the element larger than key
    }  
} 
int main(){  
    int num,i;
	cout<<"Enter the data number:";
	cin>>num;
	int *data = new int[num];							//data: store the data to be sorted
	cout<<"Enter the data:";
	for (i=0;i<num;i++)
		cin>>data[i];
    qsort(data,0,num-1);
    for(i=0;i<num;i++)
        cout<<data[i]<<" ";
    delete data;
	return 0;
}
