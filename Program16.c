

////////////////////////////////////////////////////////////////////////////
//
//  Function name : FactorsSum
//  Input         : Integer
//  Output        : Integer (Factorial)
//  Description   : It is used to find factorial of given number.
//                  Accept number and return the addition of its factors
//                  Input : 6
//                  Output : ( 6)   1 +  2 +  3

//                  Input :  12
//                  output : (16)  1+ 2 + 3 + 4 + 6

//   Date          : 01/03/2021
//   Time Complexity : O(N/2)
//   Author        : Pranav Anil Waghmare
//
////////////////////////////////////////////////////////////////////////////









# include<stdio.h>
int FactorsSum(int iNo)
{
    int iCnt = 0, iSum = 0;
    if(iNo < 0)
    {iNo = -iNo;}
    
    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    iRet = FactorsSum(iValue);
    printf("Summation is : %d\n",iRet);
    return 0;
}
