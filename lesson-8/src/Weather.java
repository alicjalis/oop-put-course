@SuppressWarnings("ClassCanBeRecord")
public class Weather {

    private final Forecast forecast;

    public Weather(Forecast forecast) {
        this.forecast = forecast;
    }

    float temperature() {
        return forecast.todaysTemperature();
    }
}
