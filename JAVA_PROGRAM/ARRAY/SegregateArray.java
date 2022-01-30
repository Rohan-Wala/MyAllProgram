

class SegrigateArray{
    public static void main(String[] args) {
        int[] arr = {0,1,0,3,4,0};

        segregate(arr);
        for(int i=0;i <arr.length ;i++)
            System.out.print(arr[i] + " ");

    }
    static void  segregate(int [] arr){
        // +ve  and zero 
        for(int i=0,j=0;j < arr.length;j++){
            if(arr[j] > 0){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
                i++;
            }
        }
    }

    static void  segregate2(int [] arr){
        // +ve  and -ve 
        for(int i=0,j=1;j < arr.length;j++){
            if(arr[j] < 0){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
                i++;
            }
        }
    }
}