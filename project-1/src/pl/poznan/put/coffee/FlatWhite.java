package pl.poznan.put.coffee;

public class FlatWhite extends Coffee {
    public FlatWhite(String typeOfMilk) {
        super(0, 100, 1, 60, typeOfMilk, Roast.medium, Acidity.medium);
    }
}
