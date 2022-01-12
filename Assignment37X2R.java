//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  PatternLogiC6()
//
// Description   :  program which accept number of rows and number of 
//                  columns from user and display below pattern.
//
// Input         :  Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

public class Assignment37X2R 
{
    public static void main(String[] args) 
    {
        Pattern006 pobj = new Pattern006(); 
        pobj.Accept();
        pobj.PatternLogiC6();
    }
}

class GetSet0X7
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

class Pattern006 extends GetSet0X7
{
    public void PatternLogiC6()
    {   
        int i = 0, j = 0;
        for(i =1; i <= iNo1; i++)
        {
            for(j = 1; j <= iNo2; j++)
            {
                System.out.print(j+"\t");
            }
            System.out.println();
        }
    }
}