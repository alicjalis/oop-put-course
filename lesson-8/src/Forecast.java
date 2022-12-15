public interface Forecast {

    float todaysTemperature();

    class Fake implements Forecast {

        @Override
        public float todaysTemperature() {
            return -4;
        }
    }
}
