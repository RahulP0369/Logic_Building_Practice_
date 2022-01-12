//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  PatternLogiC2()
//
// Description   :  program which accept number of rows and number of columns 
//                  from user and display below pattern.
//
// Input         :  Integer
//
// Output        :  char
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

public class Assignment36X3R 
{
    public static void main(String[] args) 
    {
        Pattern002 pobj = new Pattern002();
        pobj.Accept();
        pobj.PatternLogiC2();
    }    
}

class GetSet0X3
{   
    public int iNo1, iNo2;
    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First No: ");
        iNo1 = sobj.nextInt();

        System.out.print("Enter Second No: ");
        iNo2 = sobj.nextInt();
    }
}

class Pattern002 extends GetSet0X3
{
    public void PatternLogiC2()
    {
        int i = 0, j = 0;
        char c = 'A';
        for(i = 1, c = 'A'; i <= iNo1; i++,c++)
        {
            for(j=1; j <= iNo2; j++)
            {
                System.out.print(c + " ");
            }
            System.out.println();
        }
    }
}
