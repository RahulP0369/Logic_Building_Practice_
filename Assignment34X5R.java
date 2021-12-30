//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  ProductLogic()
//
// Description   :  Write java program which accept N numbers from user and return 
//                  product of all odd elements.
//
// Input         :  Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

public class Assignment34X5R 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        int iLength  = 0, iRet = 0;

        System.out.println("Enter size: ");
        iLength = sobj.nextInt();

        Product pobj = new Product(iLength);
        pobj.Accept();
        pobj.Display();
        iRet =  pobj.ProductLogic();
        if(iRet == 1)
        {
            System.out.println("Product of numbers is: 0");
        }
        else
        {
            System.out.println("Product of numbers is: "+ iRet);
        }
    }    
}

class Array010R
{   
    public int Arr[];
    public int iNo;
    public Array010R(int iSize)
    {
        iNo = 0;
        Arr = new int[iSize]; 
    }
    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        int iCnt = 0;

        System.out.println("Enter elements: ");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }
    public void Display()
    {
        System.out.println("Entered elements are: ");
        for(int iCnt = 0; iCnt <Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }
}
class Product extends Array010R
{
    public Product(int iValue)
    {
        super(iValue);
    }
    public int ProductLogic()
    {
        int iCnt = 0;
        int iNo1 = 1;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] % 2) != 0)
            {   
                iNo1 = iNo1 * Arr[iCnt];
            }
        }
        return iNo1;
    }
}