import java.util.Scanner;

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CountRange()
//
// Description   :  Write a program which accept number from user and return the 
//                  count of digits in between 3 and 7.
//
// Input         :  Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

public class Assignment33X3R 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0, iRet = 0;

        System.out.println("Enter Digit: ");
        iValue = sobj.nextInt();

        Digit03R dobj = new Digit03R();
        
        iRet = dobj.CountRange(iValue);

        System.out.println("Digits between 3 and 7 are: "+iRet);
    }    
}

class Digit03R
{
    public int CountRange(int iNo)
    {   
        int iCnt = 0;
        while(iNo != 0)
        {
            if((iNo % 10) > 3 && (iNo % 10) < 7)
            {
                iCnt++;
            }
            iNo = iNo / 10;
        }
        return iCnt;
    }   
}