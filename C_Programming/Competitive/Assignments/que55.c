//Write a program which accept range from user and display all numbers in between that range in reverse order.
//Input : 23  35
//Output : 35 34 33 32 31 30 29 28 27 26 25 24 23

#include<stdio.h>
void RangeDisplayRev(int iStart , int iEnd)
{
    
    int iCnt = 0;

    if( iStart > iEnd)
    {
        printf("invalid Range\n");

        return;
        
    }
    
    for(iCnt = iEnd ; iCnt >= iStart; iCnt--)
    {
        printf("%d\t",iCnt);
        
    }
    

}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter Starting point:");
    scanf("%d",&iValue1);

    printf("Enter Ending Point:");
    scanf("%d",&iValue2);

     RangeDisplayRev(iValue1,iValue2);
    
    return 0;
}