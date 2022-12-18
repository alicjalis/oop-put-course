package pl.poznan.put.coffee;

import pl.poznan.put.Beverage;

public class Coffee extends Beverage {

    int size = 250;
    int sugarAmount; // in teaspoons
    int milkAmount; //in milliliters

    int foamedMilkAmount; // in milliliters

    int espressoAmount; // in milliliters
    String typeOfMilk; // soy, almond, coconut, oat, whole

    Roast roastLevel;
    Acidity acidityLevel;

    enum Roast {
        light,
        medium,
        dark
    }

    enum Acidity {
        strong,
        medium,
        light
    }

    public Coffee(int sugarAmount, int milkAmount, int foamedMilkAmount, int espressoAmount, String typeOfMilk, Roast roastLevel, Acidity acidityLevel) {
        this.sugarAmount = sugarAmount;
        this.milkAmount = milkAmount;
        this.foamedMilkAmount = foamedMilkAmount;
        this.espressoAmount = espressoAmount;
        this.typeOfMilk = typeOfMilk;
        this.roastLevel = roastLevel;
        this.acidityLevel = acidityLevel;
    }

    @Override
    public Recipe recipe() {
        var recipe = Recipe.start()
                .take("kettle")
                .pour("water", size - milkAmount + "ml")
                .custom("boil")
                .take("cup")
                .pour("coffee beans", "5g")
                .pour("water");
        if (milkAmount > 0) recipe.pour(typeOfMilk + " milk", milkAmount + "ml");
        return recipe.enjoy();
    }

    @Override
    public String toString() {
        return "Coffee{" +
                "sugarAmount=" + sugarAmount +
                ", milkAmount=" + milkAmount +
                ", typeOfMilk=" + typeOfMilk +
                ", roastLevel=" + roastLevel +
                ", acidityLevel=" + acidityLevel +
                '}';
    }
}
