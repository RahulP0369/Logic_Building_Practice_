import java.util.Scanner;

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  eDivisible()
//
// Description   :   Write Java program which accept N numbers from user and display 
//                   all such elements which are even and divisible by 5.
//
// Input         :  Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

public class Assignment32X3R 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        int iLength = 0;
        System.out.println("Enter the size: ");
        iLength = sobj.nextInt();
        
        ArrayDemo03R Adobj = new ArrayDemo03R(iLength);
        Adobj.Accept();
        Adobj.Display();
        Adobj.eDivisible();
    }    
}
class Array03R
{   
    public int Arr[];
    public Array03R(int iSize)
    {
        Arr = new int [iSize];

    }
    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        int iCnt = 0;
        System.out.println("Enter elements: ");
        for(iCnt = 0; iCnt<Arr.length;iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }
    public void Display()
    {
        for(int iCnt = 0; iCnt<Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }
}
class ArrayDemo03R extends Array03R
{
    public ArrayDemo03R(int iSize)
    {
        super(iSize);
    }
    public void eDivisible()
    {
        int iCnt = 0;
        for(iCnt = 0; iCnt <Arr.length; iCnt++)
        {
            if((Arr[iCnt] % 2) == 0 && (Arr[iCnt] % 5) == 0)
            {
                System.out.println("Number is Even and Divisible by 5 is: "+Arr[iCnt]);
            }
        }
    }
}