import java.util.Scanner;

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Reverse()
//
// Description   :   Write a java program which accept string from user and display 
//                   it in reverse order.
//
// Input         :  String
//
// Output        :  String
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

public class Assignment31X5R 
{
    public static void main(String[] args) 
    {
        StringDemo05XR mobj = new StringDemo05XR();
        mobj.Accept();
        mobj.Display();
        String str = mobj.Reverse();
        System.out.println("Reverse string is: "+str);
    }    
}
class String05XR
{   
    public String str;
    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter String: ");
        str = sobj.nextLine();
    }
    public void Display()
    {
        System.out.println("Entered string is: "+str);
    }
}
class StringDemo05XR extends String05XR
{
    public String Reverse()
    {
        char Arr[] = str.toCharArray();
        int iStart = 0, iEnd = Arr.length-1;

        char temp;

        while(iStart < iEnd)
        {
            temp = Arr[iStart];
            Arr[iStart] = Arr[iEnd];
            Arr[iEnd] = temp;
            iStart ++;
            iEnd--;
        }
        return new String(Arr);
    }
}