import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CountCapital()
//
// Description   : Write a Java program which accept string from user and count 
//                 number of capital characters.
//
// Input         :  String
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

public class Assignment31X1R 
{
    public static void main(String[] args) 
    {
        StringDemo01XR mobj = new StringDemo01XR();
        int iRet = 0;
        mobj.Accept();
        mobj.Display();
        iRet = mobj.CountCapital();
        System.out.println("Count of capital characters ise: "+iRet);
    }    
}
class String01XR
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
        System.out.println("String is: "+str);
    }
}
class StringDemo01XR extends String01XR
{
    public int CountCapital()
    {
        char Arr[] = str.toCharArray();
        int iCnt = 0, i = 0;
    
        for(i = 0; i < Arr.length; i++)
        {
            if((Arr[i] >= 'A') && (Arr[i] <= 'Z'))
            {
                iCnt++;
            }
        }
        return iCnt;
    }
}