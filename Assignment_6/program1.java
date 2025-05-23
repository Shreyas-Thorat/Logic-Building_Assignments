import java.util.Scanner;


class Check
{

    public void CheckNumber(int iNo)
    {
        if(iNo < 50)
        {
            System.out.println("Small");
        }
        else if((iNo > 50) && (iNo < 100))
        {
            System.out.println("Medium");
        }
        else if (iNo > 100)
        {
            System.out.println("Large");
        }


    }
} 

class program1
{
    public static void main(String A[])
    {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");
        iValue = sobj.nextInt();

        Check cobj = new Check();

        cobj.CheckNumber(iValue);


    }
}