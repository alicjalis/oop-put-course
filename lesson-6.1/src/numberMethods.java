public class numberMethods {
    private numberMethods() {
        //throw new unsupportedOperationException();
    }

    private int a;
    private int b;

    public int max() {
        a = this.a;
        b = this.b;
        return a > b ? a : b;
    }

    public int min() {
        a = this.a;
        b = this.b;
        return a < b ? a : b;
    }

    public float avg() {
        a = this.a;
        b = this.b;
        return (a + b) / 2;
    }

    public numberMethods(int a, int b) {this.a = a; this.b = b; }
}
