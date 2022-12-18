import pl.poznan.put.*;
import pl.poznan.put.coffee.*;

import java.util.Scanner;
import java.lang.Math;

public class Main {

    private static final Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        while (true) {
            System.out.println("Welcome to coffee recommendation system :)\nPick your preferred roast level, type a number:\n");
            System.out.println(" 1 - light \n 2 - medium \n 3 - dark \n 4 - I DONT KNOW WHAT I WANT :(\n");
            int number = sc.nextInt();
            System.out.println();
            System.out.println("Chosen nuber: " + number);
            if (number == 1) {
                System.out.println("If u want light roast, you might want to try latte.");
                System.out.println("Choose milk (whole | oat | soy | almond | coconut)");
                String milk = sc.next();
                Coffee latte = new Latte(milk);
                System.out.println(latte.recipe());
            } else if (number == 2) {
                System.out.println("If u want medium roast, you might want to try cappuccino or flat white.");
                System.out.println("Do u want\n1 - Cappuccino\n2 - Flat white ");
                int num = sc.nextInt();
                System.out.println("Choose milk (whole | oat | soy | almond | coconut");
                String milk = sc.next();
                if (num == 1) {
                    Coffee cappuccino = new Cappuccino(milk);
                    System.out.println(cappuccino.recipe());
                    System.exit(0);
                } else if (num == 2) {
                    Coffee FlatWhite = new FlatWhite(milk);
                    System.out.println(FlatWhite.recipe());
                    System.exit(0);
                } else {
                    System.out.println("You picked wrong number");
                    System.exit(0);
                }

            } else if (number == 3) {
                System.out.println("If u want strong roast, you might want to try just espresso :)");
                System.out.println(new Espresso().recipe());
                System.exit(0);

            } else if (number == 4) {
                System.out.println("Would you like for us to pick you a random drink?\n 1 - YES\n 2 - NO, I CHANGED MY MIND, TAKE ME BACK :)\n");
                int num = sc.nextInt();
                if (num == 1) {
                    // 4 driny
                    // wybieranie randomowego drina
                    int max = 4;
                    int min = 1;
                    int range = max - min + 1;
                    Beverage beverage = switch ((int) (Math.random() * range) + min) {
                        case 1 -> new Cappuccino("oat");
                        case 2 -> new Latte("almond");
                        case 3 -> new FlatWhite("no lactose");
                        case 4 -> new Espresso();
                        default -> throw new IllegalStateException("Unexpected rand value");
                    };
                    System.out.println(beverage.recipe());

                    //wypisanie randomowego
                    System.exit(0);

                } else {
                    System.out.println("You picked wrong number");
                }

            } else {
                System.exit(0);
            }

        }
    }
}





