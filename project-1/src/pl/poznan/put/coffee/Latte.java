package pl.poznan.put.coffee;

public class Latte extends Coffee {

    public Latte(String typeOfMilk) {
        super(3,120, 3,40, typeOfMilk, Roast.light, Acidity.medium);
    }
}
