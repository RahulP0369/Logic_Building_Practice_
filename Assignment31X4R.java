import java.util.Scanner;

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  ChkVowel()
//
// Description   :   Write a java program which accept string from user and check 
//                   whether it contains vowels in it or not.
//
// Input         :  String
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

public class Assignment31X4R 
{
    public static void main(String[] args) 
    {
        StringDemo04XR mobj = new StringDemo04XR();
        boolean bRet = false;
        mobj.Accept();
        mobj.Display();
        bRet = mobj.ChkVowels();
        
        if(bRet == true)
        {
            System.out.print("Vowel is there");
        }
        else
        {
            System.out.println("Vowel is not there");
        }

    }    
}
class String04Xr
{
    public String str;

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter String is: ");
        str = sobj.nextLine();
    }
    public void Display()
    {
        System.out.println("String is: "+str);
    }
}
class StringDemo04XR extends String04Xr
{
    public boolean ChkVowels()
    {
        char Arr[] = str.toCharArray();
        int i = 0;
        boolean  flag = false;

        while(i < Arr.length)
        {
            if((Arr[i] == 'a') || (Arr[i] == 'e') || (Arr[i] == 'i') || (Arr[i] == 'o') || (Arr[i] == 'u') || (Arr[i] == 'A') || (Arr[i] == 'E') || (Arr[i] == 'I') || (Arr[i] == 'O') || (Arr[i] == 'U'))
            {
                flag = true;
                break;
            }
            i++;
        }

        return flag;
    }
}