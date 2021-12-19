import java.util.Scanner;

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Difference()
//
// Description   :   Write Java program which accept N numbers from user and return 
//                   difference between summation of even elements and summation of 
//                   odd elements.
//
// Input         :  Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

public class Assignment32X1R    
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        int iLength = 0, iRet = 0;

        System.out.println("Enter the number of elements: ");
        iLength = sobj.nextInt();

        ArrayDemo adobj = new ArrayDemo(iLength);
        adobj.Accept();
        adobj.Display();
        iRet = adobj.Difference();
        System.out.println("Difference between even and odd number is: "+iRet);
    }
}
class ArrayX01R
{
    public int Arr[];

    public ArrayX01R(int iSize)
    {
        Arr = new int[iSize];
    }
    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        int iCnt = 0;
        System.out.println("Enter elements: ");
        for(iCnt = 0; iCnt <Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }
    public void Display()
    {
        System.out.println("Entered Elements are: ");
        int iCnt = 0;
        for(iCnt = 0; iCnt < Arr.length;iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }
}
class ArrayDemo extends ArrayX01R
{
    public ArrayDemo(int iSize)
    {
        super(iSize);
    }
    public int Difference()
    {
        int iEven = 0, iOdsum = 0, iCnt = 0, iDiff = 0;
        for(iCnt = 0; iCnt<Arr.length;iCnt++)
        {
            if((iCnt % 2) == 0)
            {
                iEven = iEven + Arr[iCnt];
            }
            else
            {
                iOdsum = iOdsum + Arr[iCnt];
            }
        }
        if(iEven > iOdsum)
        {
            iDiff = iEven - iOdsum;
        }
        else
        {
            iDiff = iOdsum - iEven;
        }
        return iDiff;
    }
}