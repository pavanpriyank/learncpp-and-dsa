public class reverse {
    public static void main(String[] args) {
           
        int reverse = 0;

        int num= 4321;

        while (num != 0){
            int lastdigit =  num % 10;
            reverse =(reverse * 10) + lastdigit;
            num/=10;
        }

        System.err.println(reverse);
        }
    }

