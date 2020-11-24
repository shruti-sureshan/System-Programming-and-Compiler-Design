package Abc;
import java.util.Scanner;
public class LeftR {
public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
System.out.println("Enter Grammar : ");
        String s[]=new String[3];  //Enter 3 statement for now
charip[][]=new char[3][20];
for(int i=0;i<s.length;i++)     {
s[i]=sc.next();
ip[i]=s[i].toCharArray();       }
chara,b;
int c=0;
System.out.println("Left Recursion \n Grammar free from Left recursion is as follows: \n");
for(int i=0;i<s.length;i++){
            a=ip[i][0];b=ip[i][2];
if(a!=b){
c++; 
System.out.println(ip[i]); }
else  {
//for alpha
for(int j=i;j<s.length;j++)   {
int k=3;
System.out.print(ip[j][0]+"'-- ");
while(ip[j][k]!='|')    {
System.out.print(ip[j][k]);
k++;
}
System.out.println(ip[j][0]+"' | #");
break;       }    
            //for beta
for(int j=i;j<s.length;j++)   {
int k=ip[j].length-1;
System.out.print(ip[j][0]+"-- ");
while(ip[j][k]!='|')   {
System.out.print(ip[j][k]);
k--;    }
System.out.println(ip[i][0]+"'");
break;     } }}
if(c==s.length){
System.out.println("Valid Grammar");
        }}}
 

/*
OUTPUT
Enter Grammar :
E-E+T|T
T-T*F|F
F-id
Left Recursion 
Grammar free from Left recursion is as follows: 
E'-- +TE' | #
E-- TE'
T'-- *FT' | #
T-- FT'
F-id
Valid grammar

Enter Grammar :
A-BA|C
B-ID
C-D
Left Recursion 
 Grammar free from Left recursion is as follows: 
A-BA|C
B-ID
C-D
Valid Grammar
*/