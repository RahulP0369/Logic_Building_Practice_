import java.util.Scanner;

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CountDiff()
//
// Description   :   Write a java program which accept string from user and return 
//                   difference between frequency of small characters and frequency 
//                   of capital characters.
//
// Input         :  String
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

public class Assignment31X3R 
{
    public static void main(String[] args) 
    {
        StringDemo03XR mobj = new StringDemo03XR();
        int iRet = 0;
        mobj.Accept();
        mobj.Display();
        iRet = mobj.CountDiff();
        System.out.println("Difference between camp and small is: "+iRet);
    }
}
class String03XR
{
    public String str;

    public void Accept() 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter string: ");
        str = sobj.nextLine();
    }
    public void Display()
    {
        System.out.println("String is: "+str);
    }
}
class StringDemo03XR extends String03XR
{
    public int CountDiff()
    {
        char Arr[] = str.toCharArray();
        int i = 0, iCntCap = 0, iCntSmall = 0,ans = 0;

        for(i=0; i<Arr.length; i++)
        {
            if((Arr[i]>='A') && (Arr[i]<='Z'))
            {
                iCntCap++;
            }
            if((Arr[i]>='a') && (Arr[i]<='z'))
            {
                iCntSmall++;
            }
        }
        if(iCntCap > iCntSmall)
        {
           return  iCntCap - iCntSmall;
        }
        else
        {
            return  iCntSmall - iCntCap;
        }
    }
}