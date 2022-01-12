//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  PatternLogiC4()
//
// Description   :  program which accept number of rows and number of columns 
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

public class Assignment36X5R 
{
    public static void main(String[] args) 
    {
        Pattern004 pobj = new Pattern004();
        pobj.Accept();
        pobj.PatternLogiC4();
    }    
}

class GetSet0X5
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

class Pattern004 extends GetSet0X5
{  
    public void PatternLogiC4()
    {
        int i = 0, j = 0;

        for(i = 1; iNo1 >= i; i++)
        {
            for(j = 1; j<= iNo2; j++)
            {
                System.out.print(j+" ");
            }
            System.out.println();
        }
    }
}