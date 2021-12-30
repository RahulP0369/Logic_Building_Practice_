//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  FindNumber01X()
//
// Description   :  program which accept N numbers from user and accept 
//                  one another number as NO , check whether NO is present or not.
//
// Input         :  Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

public class Assignment34X1R 
{   
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        int iLength = 0;
        boolean bRet = false;
        System.out.println("Enter the number of elements: ");
        iLength = sobj.nextInt();

        FindNumber01X fobj = new FindNumber01X(iLength);

        fobj.Accept();
        fobj.Display();
        bRet = fobj.FindNo();

        if(bRet == true)
        {
            System.out.println("Number found");
        }
        else
        {
            System.out.println("Number not found");
        }
    }
}
class Array06R
{
    public int iNo; 
    public int Arr[];

    public Array06R(int iSize)
    {
        iNo = 0;
        Arr = new int[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        int iCnt = 0;

        System.out.println("Enter elements: ");
        for(iCnt  = 0; iCnt<Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
        System.out.println("Enter no to find: ");
        iNo = sobj.nextInt();
    }

    public void Display()
    {
        System.out.println("Elements are: ");
        int iCnt = 0;
        for(iCnt = 0; iCnt < Arr.length;iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }
}
class FindNumber01X extends Array06R
{
    public FindNumber01X(int iValue)
    {
        super(iValue);
    }
    public boolean FindNo()
    {
        int iCnt = 0; 
        boolean flag = false;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == iNo)
            {
                flag = true;
                break;
            }
        }
        return flag;
    }
}