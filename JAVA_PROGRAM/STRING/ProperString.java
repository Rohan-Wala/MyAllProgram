import java.util.HashMap;
import java.util.HashSet;
import java.util.Random;
class solution {
    public static String claculatePs(int n, String str){
        int[] value = {0,0,0,0};
        // value[0] = count of a
        // value[1] = count of b
        // value[2] = count of c
        // value[3] = count of d

        for(int i=0;i<n;i++){
            if(str.charAt(i) == 'a')
                value[0]++;
            if(str.charAt(i) == 'b')
                value[1]++;
            if(str.charAt(i) == 'c')
                value[2]++;
            if(str.charAt(i) == 'd')
                value[3]++;
        }

        String ans = "";
        
        int repet = n/4;
        int[] count = {0,0,0,0};
        for(int i=0;i<n;i++){
            String chars = "abcd";
            Random rnd = new Random();
            char c = chars.charAt(rnd.nextInt(chars.length()));

            if(c == 'a' && count[0] < repet){
                count[0]++;
                ans = ans+c;
            }
            else if(c == 'b' && count[1] < repet){
                count[1]++; 
                ans = ans+c;
            }
            else if(c == 'c' && count[2] < repet){
                count[2]++; 
                ans = ans+c;
            }
            else if(c == 'd' && count[3] < repet){
                count[3]++; 
                ans = ans+c;
            }
        }
        return ans;
    }
    public static void main(String[] args) {
        String str = "ababaaba";
        System.out.println( claculatePs(8, str));
    }
}