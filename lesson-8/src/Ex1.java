public class Ex1 {

    public static void main(String[] args) {
        Weather weather = new Weather(new Forecast.Fake());
        System.out.println("Today's temperature is " + weather.temperature());
    }
}