//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Range()
//
// Description   :  Write java program which accept N numbers from user and accept 
//                  Range, Display all elements from that range
//
// Input         :  Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

public class Assignment34X4R 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        int iLength = 0;
        System.out.println("Enter the number of element: ");
        iLength = sobj.nextInt();    

        DisplayX01 dobj = new DisplayX01(iLength);
        dobj.Accept();
        dobj.Range();
    }    
}

class GetSetX01
{   
    public int iStart;
    public int iEnd;
    public int Arr[];

    public GetSetX01(int iSize)
    {
        Arr = new int[iSize];
        iStart = 0;
        iEnd = 0;
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        int iCnt = 0;
        for(iCnt = 0; iCnt <Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        System.out.println("Enter First Number: ");
        iStart = sobj.nextInt();

        System.out.println("Enter Second Number: ");
        iEnd =sobj.nextInt();
    }
    public void Display()
    {
        System.out.println("Elements are: ");
        int iCnt = 0;
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }
}

class DisplayX01 extends GetSetX01
{
    DisplayX01(int iValue)
    {
        super(iValue);
    }
    public void Range()
    {
        int iCnt = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= iStart) && (Arr[iCnt] <= iEnd))
            {
                System.out.println(Arr[iCnt]);
            }
        }
    }
}