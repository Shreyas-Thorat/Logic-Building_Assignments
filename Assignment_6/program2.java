import java.util.Scanner;


class Check
{

    public void CheckDigit(int iNo)
    {
        switch(iNo)

        {
            case 1:
            System.out.println("One");
            break;

            case 2:
            System.out.println("Two");
            break;

            case 3:
            System.out.println("Three");
            break;

            case 4:
            System.out.println("Four");
            break;

            case 5:
            System.out.println("Five");
            break;

            case 6:
            System.out.println("Six");
            break;

            case 7:
            System.out.println("Seven");
            break;

            case 8:
            System.out.println("Eight");
            break;

            case 9:
            System.out.println("Nine");
            break;

            case 0:
            System.out.println("Zero");
            break;

            default:
            System.out.println("Enter valid number.");

            

        }
    }
}
class program2 
{
    public static void main(String A[])
    {

        int iValue = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number :");
        iValue = sobj.nextInt();

        Check cobj = new Check();

        cobj.CheckDigit(iValue);




    }
    
}
