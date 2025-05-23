import java.util.Scanner;


class Factorial
{
    public int FindFactorial(int iNo)
    {
        if(iNo < 0)
        {
            iNo = -iNo;
        }

        int iCnt = 0;
        int iMult = 1;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            iMult = iMult * iCnt;
        }

        return iMult;
    }
} 

class program3 
{
    public static void main(String A[])
    {

        int iValue = 0, iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number to find its Factorial : ");
        iValue  = sobj.nextInt();

        Factorial fobj = new Factorial();

        

        iRet = fobj.FindFactorial(iValue);

        System.out.println("The Factorial of Given number is : "+iRet);



    }
    
}
