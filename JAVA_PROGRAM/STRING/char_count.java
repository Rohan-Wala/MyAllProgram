import java.util.*;
class char_count{
	
	public static void main(String args[]){
	
String s = "geeksforgeeks";
		String s2= s;

        // s = s.replace(" ","");

        // for(int i=0;i<s.length();) {    
            // int cnt = 1;
            // int flag = 1;
            // for(int j=1;j<s.length();j++) {
                
                // if(s.charAt(i)=='0' ){
                    // flag = 0;
                    // break;
                // }
                // else if(s.charAt(0)==s.charAt(j)) {
                    // cnt++;
                // }
            // }
            // if(flag ==1 && s.charAt(i)!='0') {
                      // System.out.println(s.charAt(i)+" -> "+cnt);
                // s = s.replace(String.valueOf(s.charAt(i)),"");
				
				
            // }
        // }
		          

		Map<Character,Integer> map = new HashMap();
        for(int i=0;i<s.length();i++) {
        char ch = s.charAt(i);
        if(map.containsKey(ch)) {
        map.put(ch,map.get(ch)+1);
        }else
        map.put(ch,1);
        }
        System.out.println("The occurence for characters are:");
        for(Map.Entry<Character,Integer> e : map.entrySet()) {
        System.out.println(e.getKey()+ " -> "+e.getValue());
        }

        s = s2;
        System.out.println("The previous String was: "+s);
			
		}
	
}