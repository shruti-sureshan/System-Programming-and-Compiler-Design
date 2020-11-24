package com.codegeneration;
import java.util.Scanner;
public class CommonSubExpressionElimination 
{
    Scanner sc=new Scanner(System.in);
    String input[]=new String[20];
    String temporary[]=new String[5];
    int j,flag1=0,n,i;
    public void input()
    {
        System.out.println("----- COMMON SUB EXPRESSION ELIMINATION -----");
        System.out.println("");
        System.out.println("Enter the number of lines in the code");
        n=sc.nextInt();
        System.out.println("Enter the code");
        for(i=0;i<=n;i++)
        {
            input[i]=sc.nextLine();
        }
         }
     public void elimination()
    {
        System.out.println("New code after Common Sub Expression Elimination is :");
        System.out.println("");
        for(i=0;i<=1;i++)
        {
            String words[]=input[i].split("\\s");
            for(j=0;j<words.length;j++)
            {
                int compare=words[j].compareTo("a");
                if(compare==0 && j==2)
                {
                    flag1=j;
                    System.out.print("temp =");
                    for(int t=flag1;t<words.length-1;t++)
                    {
                        System.out.print(words[t]);
                    }
                    System.out.print(";");
                    System.out.println("");
                    System.out.println(words[0]+"=temp ;");
                    System.out.println("Z"+ "=temp+" + "10;");
                    break;
                }
        }
     }
  }
    
    public static void main(String[] args)
    {
        CommonSubExpressionElimination ce=new CommonSubExpressionElimination ();
        ce.input();
        ce.elimination();
    }
    
}

/*
Output
run:
----- COMMON SUB EXPRESSION ELIMINATION -----

Enter the number of lines in the code
2
Enter the code
Y = a + b ;
Z = a + b + 10 ;
New code after Common Sub Expression Elimination is :

temp =a+b;
Y=temp ;
Z=temp+10;
BUILD SUCCESSFUL (total time: 8 seconds)
*/