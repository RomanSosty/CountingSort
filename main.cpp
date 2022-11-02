#include <iostream>

int* ComparisonCountingSort(int *myNum, int lenArr, int *finalArr){
    int count[lenArr];

    for(int i = 0; i < lenArr; i++)
    {
        count[i] = 0;
    }

    for(int i = 0; i < lenArr-1; i++){
        for (int j = i+1; j < lenArr; j++)
        {
            if(myNum[i] < myNum[j]){
                count[j] = count[j]+1;
            }else{
                count[i] = count[i]+1;
            }
        }
        
    }

    for(int i = 0; i < lenArr; i++){
        finalArr[count[i]] = myNum[i];
    }

    return finalArr;

}

void DistributionCountingSort(){

}

void printArr(int *myArr, int lenArr){
    for(int i = 0; i < lenArr; i++)
    {
        std::cout << myArr[i] << ", ";
    }
}


int main(){
    int myNum[6] = {62,31,84,96,19,47};
    int lenArr = sizeof(myNum)/sizeof(int);
    int finalArr[lenArr];
    
    printArr(ComparisonCountingSort(&myNum[0], lenArr, &finalArr[0]), lenArr);

    return 0;
}
