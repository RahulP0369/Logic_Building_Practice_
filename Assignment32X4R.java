import java.util.Scanner;

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Divisible()
//
// Description   :  Write Java program which accept N numbers from user and display 
//                  all such elements which are divisible by 3 and 5.
//
// Input         :  Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

public class Assignment32X4R 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        int iLength = 0;
        System.out.println("Enter size: ");
        iLength = sobj.nextInt();
        
        ArrayDemo04R Adobj = new ArrayDemo04R(iLength);
        Adobj.Accept();
        Adobj.Display();
        Adobj.Divisible();
    }
}
class Array04R
{
    public int Arr[];
    public Array04R(int iSize)
    {
        Arr = new int[iSize];
    }
    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        int iCnt = 0;
        System.out.println("Enter elements: ");
        for(iCnt = 0; iCnt <Arr.length;iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }
    public void Display()
    {
        int iCnt = 0;
        for(iCnt = 0; iCnt<Arr.length;iCnt++)
        {
            System.out.println("Entered elements are: "+Arr[iCnt]);
        }
    }
}
class ArrayDemo04R extends Array04R
{
    public ArrayDemo04R(int iSize)
    {
        super(iSize);
    }

    public void Divisible()
    {
        int iCnt = 0;
        for(iCnt = 0; iCnt<Arr.length;iCnt++)
        {
            if((Arr[iCnt] % 3) == 0 && (Arr[iCnt] % 5) == 0)
            {
                System.out.println("Number Divisible by 3 and 5 are: "+Arr[iCnt]);
            }
        }
    }
}