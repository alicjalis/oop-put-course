package pl.poznan.put.coffee;

public class Cappuccino extends Coffee {
    public Cappuccino(String typeOfMilk) {
        super(1, 40, 2, 40, typeOfMilk, Roast.medium, Acidity.medium);
    }
}
