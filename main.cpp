#include <iostream>

void ComparisonCountingSort(int *myNum, int lenArr){
    int count[lenArr];
    
    for(int i = 0; i < lenArr; i++)
    {
        count[i] = 0;
        std::cout << count[i] << std::endl;
    }

    for(int i = 0; i < lenArr-1; i++){
        for (int j = i+1; j < count; j++)
        {
            /* code */
        }
        
    }

}

void DistributionCountingSort(){

}


int main(){
    int myNum[6] = {62,31,84,96,19,47};
    int lenArr = sizeof(myNum)/sizeof(int);
    
    ComparisonCountingSort(&myNum[0], lenArr);
    return 0;
}