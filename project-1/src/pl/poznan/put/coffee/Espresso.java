package pl.poznan.put.coffee;

public class Espresso extends Coffee {
    public Espresso() {
        super(0, 0, 0, 40, null, Roast.dark, Acidity.strong);
        size = 50;
    }
}
