//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  PatternLogiC3()
//
// Description   :  Java program which accept number of rows and number of columns 
//                  from user and display below pattern.
//
// Input         :  Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

public class Assignment36X4R 
{
    public static void main(String[] args) 
    {
        Pattern003 pobj = new Pattern003();
        pobj.Accept();
        pobj.PatternLogiC3();
    }    
}

class GetSet0X4 
{
    public int iNo1 = 0, iNo2 = 0;
    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First No: ");
        iNo1 = sobj.nextInt();

        System.out.println("Enter Second No: ");
        iNo2 = sobj.nextInt();
    }
}

class Pattern003 extends GetSet0X4
{
    public void PatternLogiC3()
    {
        int i = 0, j = 0;

        for(i = iNo1; i > 0; i--)
        {
            for(j = 1; j <= iNo2; j++)
            {
                System.out.print(i + " ");
            }
            System.out.println();
        }
    }
}
