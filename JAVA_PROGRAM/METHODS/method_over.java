public class method_over
{
	// Overloaded methods
	public void fun(Object i)
	{
		System.out.println("fun(Integer ) ");
	}
	public void fun(String name)
	{
		System.out.println("fun(String ) ");
	}

	// Driver code
	public static void main(String [] args)
	{
		method_over mv = new method_over();
		
		//Integer arg = null;

		// No compiler error
		mv.fun(null);
	}
}
