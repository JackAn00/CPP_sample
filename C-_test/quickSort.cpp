
#include<iostream>
using namespace std;
void swap(int &num1,int &num2){
    int temp=num1;
    num1=num2;
    num2=temp;
}
int findMiddle(int array[],int low,int high){
    int point;
    point=array[low];
    while(low<high){
        while(low<high&&array[high]>=point){
            high--;
        }
        swap(array[low],array[high]);
        while(low<high&&array[low]<=point){
            low++;
        }
        swap(array[low],array[high]);
    }
    return low;
}
void quickSort(int array[] ,int low,int high){
    int point;
    if(low<high){
        point=findMiddle(array,low,high);
        quickSort(array,low,point-1);
        quickSort(array,point+1,high);
    }
}
int main(){
    int number[10]={5,6,4,3,2,1,8,7,9,0};
    quickSort(number,0,9);
    for(int i=0;i<10;i++){
        cout<<number[i]<<" ";
    }
   return 0;
}
