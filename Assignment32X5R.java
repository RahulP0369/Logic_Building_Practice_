import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  multiples()
//
// Description   :  Write Java program which accept N numbers from user and display 
//                  all such elements which are multiples of 11.
//
// Input         :  Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

public class Assignment32X5R 
{
    public static void main(String[] args) 
    {
        Scanner sobj  = new Scanner(System.in);
        int iLength = 0;
        System.out.println("Enter size: ");
        iLength = sobj.nextInt();

        ArrayDemo05R Adobj = new ArrayDemo05R(iLength);
        Adobj.Accept();
        Adobj.Display();
        Adobj.multiples();

    }    
}
class Array05R
{
    public int Arr[];
    public Array05R(int iSize)
    {
        Arr = new int[iSize];
    }
    public void Accept()
    {   
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter elements: ");
        int iCnt = 0;
        for(iCnt = 0; iCnt <Arr.length;iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }
    public void Display()
    {
        System.out.println("Entered elements are: ");
        int iCnt = 0;
        System.out.println(Arr[iCnt]);
    }
}
class ArrayDemo05R extends Array05R
{
    public ArrayDemo05R(int iSize)
    {
        super(iSize);
    }
    public void multiples()
    {   
        int iCnt = 0;
        for(iCnt = 0; iCnt<Arr.length; iCnt++)
        {
            if((Arr[iCnt] % 11) == 0)
            {
                System.out.println("Number which is multiple by 11 is: "+Arr[iCnt]);
            }
        }
    }
}
