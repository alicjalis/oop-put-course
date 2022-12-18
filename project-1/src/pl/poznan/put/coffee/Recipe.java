package pl.poznan.put.coffee;

import java.util.ArrayList;
import java.util.List;

public class Recipe {

    final List<Step> steps;

    private Recipe(List<Step> steps) {
        this.steps = steps;
    }

    public static Builder start() {
        return new Builder();
    }

    @Override
    public String toString() {
        var r = new StringBuilder();
        for (Step s : steps) r.append(s.toString()).append("\n");
        return r.append("enjoy :)").toString();
    }

    public static class Builder {

        final List<Step> steps = new ArrayList<>();

        public Builder take(String container) {
            steps.add(new Step(Action.TAKE, container));
            return this;
        }

        public Builder pour(String ingredient, String amount) { // wlewanie
            steps.add(new Step(Action.POUR, ingredient, amount));
            return this;
        }

        public Builder pour(String ingredient) { // wlewanie
            steps.add(new Step(Action.POUR, ingredient, "the"));
            return this;
        }

        public Builder put(String ingredient, String amount) { // umieszczanie ?????
            steps.add(new Step(Action.PUT, ingredient, amount));
            return this;
        }

        public Builder put(String ingredient) { // umieszczanie ?????
            steps.add(new Step(Action.PUT, ingredient, "the"));
            return this;
        }

        public Builder custom(String operation) {
            steps.add(new Step(Action.CUSTOM, operation));
            return this;
        }

        public Recipe enjoy() {
            return new Recipe(steps);
        }
    }

    public static class Step {

        Action action;
        String object, amount;

        private Step(Action action, String object) {
            this.action = action;
            this.object = object;
            this.amount = null;
        }

        private Step(Action action, String object, String amount) {
            this.action = action;
            this.object = object;
            this.amount = amount;
        }

        @Override
        public String toString() {
            if (action == Action.CUSTOM) return object;
            var s = new StringBuilder(action.toString().toLowerCase());
            if (action == Action.TAKE) s.append(" a");
            else if (amount != null) s.append(" ").append(amount);
            return s.append(" ").append(object).toString();
        }

    }

    public enum Action {
        TAKE, POUR, PUT, CUSTOM
    }
}
