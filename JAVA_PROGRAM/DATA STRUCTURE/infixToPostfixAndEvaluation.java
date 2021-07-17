import java.util.*;

class IntoPost{
	int priority(char symbol){
		switch(symbol){
			case '+':
			case '-':
				return 1;
			case '*':
			case '/':
				return 2;
			default:
				return 0;
		}
	}
	
	
	String convert(String infix){
		Stack<Character> s = new Stack<>();
		String postfix = "";
		char symbol;
		
		for(int i=0;i<infix.length();i++){
			symbol = infix.charAt(i);
			
			if(Character.isSpace(symbol) == false){
				switch(symbol){
					case '(':
						s.push(symbol);
						break;
					case ')':
						while(s.peek() != '('){
							postfix += s.peek();
							s.pop();
						}
						s.pop();
						break;
					case '+':
					case '/':
					case '-':
					case '*':
						while(!s.isEmpty() && priority(symbol) <= priority(s.peek())){
							postfix += s.peek();
							s.pop();
						}
						s.push(symbol);	
						break;
						
					default:
						// System.out.println(symbol);
						postfix += symbol;
							
				}
			}
			
		}
		while(!s.isEmpty()){
				postfix += s.peek();
				s.pop();
			}
			
		
		return postfix;
	}
	
}
class infixToPostfixAndEvaluation{
	public static void main(String args[]){
		String infix;
		
		Scanner s = new Scanner(System.in);
		
		System.out.println("enter the infix string");
		infix = s.nextLine();
		
		IntoPost ip = new IntoPost();
		
		System.out.println(ip.convert(infix));
		
	}
}