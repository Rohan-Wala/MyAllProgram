class student{
	private String name;
	private int age;
	student(String name,int age){
		this.name = name;
		this.age = age;
	}
	
	public static void main(String args[]){
		student arr[] = new student[3];
		arr[0]= new student("ROHAN",20);
		arr[1]= new student("ROHAN1",30);
		arr[2]= new student("ROHAN2",40);

		
		for(int i=0;i<arr.length;i++){
			System.out.println(arr[i].name +" "+ arr[i].age);
		}
	}
}