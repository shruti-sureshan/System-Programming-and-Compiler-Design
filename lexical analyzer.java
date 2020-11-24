package abc;
import java.util.Scanner;
import java.util.regex.Pattern;
public class Lex {
     public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        
        System.out.println("Enter sentence:");
        String s1=s.nextLine();
        int keyword=0;
        String[] arr=s1.split(" ");//split into string array
//System.out.println(arr[0]);
String x;
int ki=0,kt=0,v=0,a=0,n=0,o=0,l=0,p=0;
String regex="^[A-Za-z]$";
        for(int i=0;i<arr.length;i++){
            x=arr[i].toLowerCase();
        switch(x){
         
            case "if": if(ki==0){ki++;System.out.println(arr[i]+" = keyword");}
                break;
            case "then":
                          if(kt==0){kt++;System.out.println(arr[i]+" = keyword");}
                
                break;
            case "hate":
            case "like": 
                v++;
                System.out.println(arr[i]+" = verb");
               if(Pattern.matches("^[a-zA-Z]+$",arr[i-1]) && Pattern.matches("^[a-zA-Z]+$",arr[i+2])) {
               p++;
               if((arr[i-2].toLowerCase()).equals("if") && arr[i+2].equals("then")) {
               l++;
               }
               }
               
                break;
            case "they": a++;
                System.out.println(arr[i]+" = action");
                break;
            case "$":System.out.println(arr[i]+" = <eof>");
                break;
            case ".":o++;
                //    l++;
                System.out.println(arr[i]+" = operator");
            break;
            default:n++;
                System.out.println(arr[i]+" = noun");
            
        }      
        }
        System.out.println("No. of tokens: "+(ki+kt+v+a+n+o));
        System.out.println("Keyword(if,then) : ("+ki+","+kt+")"+" Verb : "+v+" Action : "+a+" Noun : "+n+" Line : "+l+" Phrase : "+p);

    }  
}

/*
Output:
Enter sentence:
If dogs hate cats then they chase . If cats like milk then they drink . $
If = keyword
dogs = noun
hate = verb
cats = noun
then = keyword
they = action
chase = noun
. = operator
cats = noun
like = verb
milk = noun
they = action
drink = noun
. = operator
$ = <eof>
No. of tokens: 14
Keyword(if,then) : (1,1) Verb : 2 Action : 2 Noun : 6 Line : 2 Phrase : 2
*/