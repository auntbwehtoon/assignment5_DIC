//
// Created by DELL on 1/2/2023.
//

#include "stdio.h"
#include "stdlib.h"

int minimum(int firstNumber, int secNumber){
    if(firstNumber>secNumber){
        return secNumber;
    }
    else{
        return firstNumber;
    }
}

int jumpSearch(int arr[], int size, int key){
    int step = 5;

    int prev = 0;

    while(arr[minimum(step,size)-1]<key){
        prev=step;
        if(arr[prev]==key){
            return prev;
        }
        step+=5;

        if(prev>=size){
            return -1;
        }
    }

    if(arr[step-2]==key){
        return step-2;
    }
    else if(arr[step]>key){
        for (int i = prev; i < step; ++i) {
            if(arr[i]==key){
                return i;
            }
        }
    }
    return -1;

}

int main(){
    int arr[]={10,20,30,40,50,60,70,80,90,100,110,120,130};
    int size=sizeof (arr)/sizeof (arr[0]);
    int toFind = 110;

    int indexNumber = jumpSearch(arr,size,toFind);

    if(indexNumber==-1){
        printf("Not found!");
    }
    else{
        printf("We found %d at %d",toFind,indexNumber);
    }



}