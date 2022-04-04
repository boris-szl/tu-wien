import java.util.*;

public class Configurator {
	/**
	 * @author Szelcsanyi Boris, 12102553
	 */
	public static void main(String[] args) throws Exception {
		PCB board = new PCB();
		// create 8 components
		// where we create 4 resistors
		Resistor resistor1 = new Resistor("ID_1", 0.06f, 1200);
		Resistor resistor2 = new Resistor("ID_2", 0.08f, 1400);
		Resistor resistor3 = new Resistor("ID_3", 0.075f, 1350);
		Resistor resistor4 = new Resistor("ID_4", 0.055f, 1150);

		Capacitor capacitor1 = new Capacitor("ID_1", 0.04f, 1.5f);
		Capacitor capacitor2 = new Capacitor("ID_2", 0.025f, 0.5f);
		Capacitor capacitor3 = new Capacitor("ID_3", 0.08f, 2.0f);
		Capacitor capacitor4 = new Capacitor("ID_4", 0.12f, 3.0f);

		// show components
		board.showHardwareComponents();

		List<HardwareComponent> resistors = new ArrayList<HardwareComponent>();
		Collections.addAll(resistors, resistor1, resistor2, resistor3, resistor4);

		List<HardwareComponent> capacitors = new ArrayList<HardwareComponent>();
		Collections.addAll(capacitors, capacitor1, capacitor2, capacitor3, capacitor4);

		// add all components from the list to the circuit board
		for (HardwareComponent resistor : resistors) {
			board.placeComponent(resistor);
		}

		for (HardwareComponent capacitor : capacitors) {
			board.placeComponent(capacitor);
		}

		// create 5 circuits
		// we connect resistor with capacitor
		board.connectComponents(resistor1, capacitor1);
		board.connectComponents(resistor2, capacitor2);
		board.connectComponents(resistor3, capacitor3);
		board.connectComponents(resistor4, capacitor4);

		// create last two components, connect them to a circuit and place it on the
		// board
		Resistor resistor5 = new Resistor("ID_5", 0.055f, 1150);
		Capacitor capacitor5 = new Capacitor("ID_5", 0.12f, 3.0f);
		CircuitPath circuit1 = new CircuitPath(resistor5, capacitor5);
		board.addConnection(circuit1);

		// calculatePrice
		System.out.println(String.format("Price of PCB = %.4f", board.calculatePrice()));

		// showConnectionDetails
		board.showConnectionDetails();

	}
}
