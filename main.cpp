#include <iostream>
#include <vector>

std::vector<int> ComparisonCountingSort(std::vector<int> *myNum)
{
    std::vector<int> A = *myNum;
    std::vector<int> Count;
    std::vector<int> S;

    for (int i = 0; i < A.size(); i++)
    {
        Count.push_back(0);
        S.push_back(0);
    }

    for (int i = 0; i < A.size() - 1; i++)
    {
        for (int j = i + 1; j < A.size(); j++)
        {
            if (A[i] < A[j])
            {
                Count[j] = Count[j] + 1;
            }
            else
            {
                Count[i] = Count[i] + 1;
            }
        }
    }

    for (int i = 0; i < A.size(); i++)
    {
        S[Count[i]] = A[i];
    }

    return S;
}

void DistributionCountingSort()
{
}

void printArr(std::vector<int> A)
{
    for (int i = 0; i < A.size(); i++)
    {
        std::cout << A[i] << ", ";
    }
}

int main()
{

    std::vector<int> myNum = {62, 31, 84, 96, 19, 47};
    printArr(ComparisonCountingSort(&myNum));

    return 0;
}
