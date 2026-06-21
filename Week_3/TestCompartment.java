import java.util.Random;

abstract class Compartment {
    public abstract String notice();
}

class FirstClass extends Compartment {
    public String notice() {
        return "First Class Compartment: Enjoy comfortable seating and premium services.";
    }
}

class Ladies extends Compartment {
    public String notice() {
        return "Ladies Compartment: Reserved for women passengers only.";
    }
}

class General extends Compartment {
    public String notice() {
        return "General Compartment: Please maintain discipline and follow railway rules.";
    }
}

class Luggage extends Compartment {
    public String notice() {
        return "Luggage Compartment: Only luggage and goods are allowed here.";
    }
}

public class TestCompartment {
    public static void main(String[] args) {

        Compartment[] compartments = new Compartment[10];

        Random random = new Random();

        for (int i = 0; i < compartments.length; i++) {

            int type = random.nextInt(4) + 1; 

            switch(type) {
                case 1:
                    compartments[i] = new FirstClass();
                    break;

                case 2:
                    compartments[i] = new Ladies();
                    break;

                case 3:
                    compartments[i] = new General();
                    break;

                case 4:
                    compartments[i] = new Luggage();
                    break;
            }

            System.out.println(compartments[i].notice());
        }
    }
}

OUTPUT-

Luggage Compartment: Only luggage and goods are allowed here.
General Compartment: Please maintain discipline and follow railway rules.
General Compartment: Please maintain discipline and follow railway rules.
Luggage Compartment: Only luggage and goods are allowed here.
General Compartment: Please maintain discipline and follow railway rules.
Ladies Compartment: Reserved for women passengers only.
Luggage Compartment: Only luggage and goods are allowed here.
Luggage Compartment: Only luggage and goods are allowed here.
Ladies Compartment: Reserved for women passengers only.
