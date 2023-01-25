public class ex1 {
    public static void main(String[] args) {
        lowerCase txt = new lowerCase(
                new Concatenation(
                        new Characters("ALIcja "),
                        new Subsequence( new Characters("lIsssdjwn"),0, 3)
                )
        );
        System.out.println(txt.printedSeq());
    }
}