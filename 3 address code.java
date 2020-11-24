public class App {
    public static void main(String[] args) {
        ThreeAddressCode threeAddressCode = new ThreeAddressCode();
        String expression = "a*b/c+d";
        System.out.println("Expression: " + expression);
        threeAddressCode.generate(expression);
    }
}


import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class ThreeAddressCode {
    // arranged according to precedence
    List<String> operators = new ArrayList<>(Arrays.asList("^", "*", "/", "+", "-"));

    public void generate(String expression) {
        String [] expr = expression.split("");
        List<String> exp = new ArrayList<>(Arrays.asList(expr));


        int i = 0;
        for(String operator : operators){
            if(exp.contains(operator)){
                for(int j=0; j<exp.size(); j++){
                    if(exp.get(j).equals(operator)){
                        String r = exp.get(j+1);
                        System.out.printf("t%d = %s %s %s\n", i, exp.get(j-1),
                                operator, exp.get(j+1));
                        exp.set(j-1, "t"+i);

                        exp.remove(operator);
                        exp.remove(r);
                        i++;
                    }
                }
            }
        }
    }
}
