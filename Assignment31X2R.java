import java.util.Scanner;

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CountSmall()
//
// Description   :  Write a java program which accept string from user and count 
//                  number of small characters
//
// Input         :  String
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

public class Assignment31X2R 
{
    public static void main(String[] args) 
    {
        StringDemo02XR mobj  = new StringDemo02XR();
        int iRet = 0;
        mobj.Accept();
        mobj.Display();
        iRet = mobj.CountSmall();
        System.out.println("Count of small characters is: "+iRet);
    }    
}
class String02XR
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
class StringDemo02XR extends String02XR
{
    public int CountSmall()
    {
        char Arr[] = str.toCharArray();
        int i = 0, iCnt = 0;

        for(i = 0; i<Arr.length;i++)
        {
            if((Arr[i]>= 'a') && (Arr[i]<='z'))
            {
                iCnt++;
            }
        }
        return iCnt;
    }
}