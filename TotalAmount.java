import java.util.Scanner;

public class TotalAmount {
    public static void main(String[] args) {
        double salesAmount;
        final double salesTax= 0.06;
        double salesDiscount = 0;

        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter salesAmount $:");
        salesAmount = scanner.nextDouble();

        if(salesAmount>=100){
            salesDiscount =salesAmount * 0.1;
        }

        double taxAmount = salesAmount * salesTax;
        double totalAmount = salesAmount - salesDiscount + taxAmount;
        System.out.println("Sub-Total $:" + salesAmount);
        System.out.println("Discount $:" + salesDiscount);
        System.out.println("Tax is $:" + taxAmount);
        System.out.println("Total $:" + totalAmount);
    }
}


