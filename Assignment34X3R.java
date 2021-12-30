//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  FindLastOcc01()
//
// Description   :  Write java program which accept N numbers from user and accept 
//                  one another number as NO , return index of last occurrence of that NO.
//
// Input         :  Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

public class Assignment34X3R 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        int iLength = 0;

        System.out.println("Enter size: ");
        iLength = sobj.nextInt();

        LastOcc01 lobj = new LastOcc01(iLength);
    }    
}

class Array08R
{
    public int iNo;
    public int Arr[];

    public Array08R(int iSize)
    {
        iNo = 0;
        Arr = new int[iSize];
    }
    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        int iCnt = 0;

        System.out.print("Enter Elements: ");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
        System.out.println("Enter No to find: ");
        iNo = sobj.nextInt();
    }
    public void Display()
    {
        System.out.print("Elements are: ");
        int iCnt = 0;

        for(iCnt = 0; iCnt<Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }
}

class LastOcc01 extends Array08R
{
    public LastOcc01(int iValue)
    {
        super(iValue);
    }

    public int FindLastOcc01()
    {
        int iCnt = 0; 

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == iNo)
            {
                break;
            }
        }
        if(iCnt == Arr.length)
        {
            return -1;
        }
        else 
        {
            return iCnt;
        }
    }
}