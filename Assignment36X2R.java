//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  PatternLogiC()
//
// Description   :  program which accept number of rows and number of columns 
//                  from user and display below pattern
//
// Input         :  Integer
//
// Output        :  char
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

public class Assignment36X2R 
{
    public static void main(String[] args) 
    {
        Pattern001 pobj = new Pattern001();
        pobj.Accept();
        pobj.PatternLogiC();
    }    
}

class GetSet0X2
{
    public int iNo1, iNo2;

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first No: ");
        iNo1 = sobj.nextInt();

        System.out.println("Enter second No: ");
        iNo2 = sobj.nextInt();
    }
}

class Pattern001 extends GetSet0X2
{
    public void PatternLogiC()
    {
        int i  = 0, j = 0;

        for(i=1; i <= iNo1; i++)
        {
            if((i % 2) == 0)
            {
                char c = 'a';
                for(j = 1; j<=iNo2; j++,c++)
                {
                    System.out.print("\t"+c);
                }
                System.out.println();
            }
            else
            {
                char c2 = 'A';
                for(j = 1; j <= iNo2; j++,c2++)
                {
                    System.out.print("\t"+c2);
                }
                System.out.println();
            }
        }
    }
}