public class lowerCase implements Sequence {

    private final Sequence sequence;

    public lowerCase(Sequence seq){
        this.sequence = seq;
    }

    @Override
    public String printedSeq() {
        return sequence.printedSeq().toLowerCase();
    }
}
