import java.util.Scanner;

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CountRange()
//
// Description   :  Write a program which accept number from user and return 
//                  difference between summation of even digits and summation of odd 
//                  digits.
//
// Input         :  Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

public class Assignment33X5R 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0, iRet = 0;

        System.out.println("Enter Digits: ");
        iValue = sobj.nextInt();

        Digit5 dobj = new Digit5();
        iRet = dobj.CountDiff(iValue);

        System.out.println("Difference between odd and even digit is: "+iRet);
    }
}
class Digit5
{
    public int CountDiff(int iNo)
    {
        int iEven = 0, iOdd = 0,rem = 0;

        while(iNo != 0)
        {
            rem = iNo % 10;
            if((rem % 2)== 0)
            {
                iEven = iEven + rem;
            }
            else
            {
                iOdd = iOdd + rem;
            }
            iNo = iNo / 10;
        }
        return iEven - iOdd;
    }
}
