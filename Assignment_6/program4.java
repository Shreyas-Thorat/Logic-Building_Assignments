import java.util.Scanner;


class Table
{
    public void DisplayTable(int iNo)
    {
        if(iNo < 0)
        {
            iNo = -iNo;
        }

        int iCnt = 0;
        int iMult = 1;

        for(iCnt = 1; iCnt <= 10; iCnt++)
        {
            iMult = iNo * iCnt;
            System.out.println(iMult + "\t");
        }

        
    }
} 

class program4 
{
    public static void main(String A[])
    {

        int iValue = 0 ;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number to find its Table : ");
        iValue  = sobj.nextInt();

        Table tobj = new Table();

        

        tobj.DisplayTable(iValue);




    }
    
}
