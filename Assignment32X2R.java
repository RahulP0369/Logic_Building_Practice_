import java.util.Scanner;

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Divisible()
//
// Description   :   Write Java program which accept N numbers from user and display 
//                   all such elements which are divisible by 5.
//
// Input         :  Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

public class Assignment32X2R 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        int iLength = 0;
        System.out.println("Enter size: ");
        iLength = sobj.nextInt();

        ArrayDemo02R adobj = new ArrayDemo02R(iLength);
        adobj.Accept();
        adobj.Display();
        adobj.Divisible();
    }
}
class Array02R
{   
    public int Arr[];
    public Array02R(int iSize)
    {
        Arr = new int[iSize];
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
        System.out.println("Entered elements are: ");
        int iCnt = 0;
        for(iCnt = 0; iCnt<Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }
}
class ArrayDemo02R extends Array02R
{
    public ArrayDemo02R(int size)
    {
        super(size);
    }
    public void Divisible()
    {
        int iCnt = 0;
        for(iCnt = 0; iCnt<Arr.length;iCnt++)
        {
            if((Arr[iCnt] % 5) == 0)
            {
                System.out.println("Number Divisible by 5 is: "+Arr[iCnt]);
            }
        }
    }
}