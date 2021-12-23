import java.util.Scanner;

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CountOdd()
//
// Description   :  Write a program which accept number from user and return the 
//                  count of odd digits.
//
// Input         :  Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

public class Assignment33X2R 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0,iRet = 0;

        System.out.println("Enter Digits: ");
        iValue = sobj.nextInt();

        Digit02R dobj = new Digit02R();
        iRet = dobj.CountOdd(iValue);

        System.out.println("Number of odd digits are: "+iRet);
    }    
}
class Digit02R
{
    public int CountOdd(int iNo)
    {
        int iCnt = 0;
        while(iNo != 0)
        {
            if((iNo % 2) != 0)
            {
                iCnt++;
            }
            iNo = iNo/10;
        }
        return iCnt;
    }
}
