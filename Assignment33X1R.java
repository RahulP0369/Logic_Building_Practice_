import java.util.Scanner;

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CountEven()
//
// Description   :  Write a java program which accept number from user and return the 
//                  count of even digits.
//
// Input         :  Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

public class Assignment33X1R 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0, iRet = 0;

        System.out.println("Enter Number: ");
        iValue = sobj.nextInt();
        
        Digit01R dobj = new Digit01R();
        iRet = dobj.CountEven(iValue);

        System.out.println("Count of Digit: "+iRet);
    }    
}

class Digit01R
{
    public int CountEven(int iNo)
    {
        if(iNo < 0)
        {
            iNo = -iNo;
        }

        int iCnt = 0;
        while(iNo != 0)
        {   
            if((iNo % 2) == 0)
            {
                iCnt++;
            }
            iNo = iNo / 10;
        }
        return iCnt;
    }
}