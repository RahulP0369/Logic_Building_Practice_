import java.util.Scanner;

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CountRange()
//
// Description   :  Write a program which accept number from user and return 
//                  multiplication of all digits.
//
// Input         :  Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

public class Assignment33X4R 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0, iRet = 0;

        System.out.println("Enter Digit: ");
        iValue = sobj.nextInt();

        Digit04R dobj = new Digit04R();
        iRet = dobj.Multiply(iValue);

        System.out.println("Multiplication of digits are: "+iRet);
    }    
}

class Digit04R
{
    public int Multiply(int iNo)
    {
        int rem = 0, iMul = 1;
        while(iNo != 0)
        {
            rem = iNo % 10;
            if(rem != 0)
            {
                iMul = iMul*rem;
            }
            iNo = iNo / 10;
        }
        return iMul;
    }
}
