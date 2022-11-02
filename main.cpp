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

std::vector<int> DistributionCountingSort(std::vector<int> *myNum, int l, int u)
{
    std::vector<int> A = *myNum;
    std::vector<int> D;
    std::vector<int> S;

    for (int j = 0; j <= u - l; j++)
    {
        D.push_back(0);
    }

    for (int i = 0; i < A.size(); i++)
    {
        D[A[i] - l] = D[A[i] - l] + 1;
        S.push_back(0);
    }

    for (int j = 1; j <= u - l; j++)
    {
        D[j] = D[j - 1] + D[j];
    }

    for (int i = A.size() - 1; i >= 0; i--)
    {
        int j = A[i] - l;
        S[D[j] - 1] = A[i];
        D[j] = D[j] - 1;
    }

    return S;
}

void printArr(std::vector<int> A)
{
    for (int i = 0; i < A.size(); i++)
    {
        std::cout << A[i] << ", ";
    }
    std::cout << std::endl;
}

int main()
{

    std::vector<int> myNum = {62, 31, 84, 96, 19, 47};
    std::vector<int> myNumTwo = {13, 11, 12, 13, 12, 12};

    printArr(ComparisonCountingSort(&myNum));
    printArr(DistributionCountingSort(&myNumTwo, 11, 13));

    return 0;
}
