import java.util.*;

public class PCB {
	/**
	 * @author Szelcsanyi Boris, 12102553
	 */
	private Collection<HardwareComponent> hwComponents = new ArrayList<HardwareComponent>();
	private Collection<CircuitPath> connections = new ArrayList<CircuitPath>();

	public PCB() {
	}

	public void placeComponent(HardwareComponent component) throws Exception {
		/**
		 * places a hardware component on the circuit board
		 * 
		 * @param any hardware component (e.g. Resistor or Capacitor)
		 * @exception same object can't be placed twice, raises error
		 */
		if (!hwComponents.contains(component)) {
			hwComponents.add(component);
			System.out.println(
					String.format("%s : %s successfully added!", component.getClass().getName(), component.getId()));
		} else {
			throw new Exception("Can't place component. It's already on the PCB");
		}
	}

	public Boolean connectComponents(HardwareComponent hw1, HardwareComponent hw2) {
		/**
		 * connects two hardware components which are placed on the circuit board and
		 * establishes connection where object new circuit is created and added to the
		 * connections list
		 * 
		 * @param hardware components for establishing a connection on the board
		 * @return true if board contains params, otherwise false
		 */
		if (hwComponents.contains(hw1) && hwComponents.contains(hw2)) {
			CircuitPath newCircuit = new CircuitPath(hw1, hw2);
			connections.add(newCircuit);
			return true;
		}
		return false;
	}

	public void addConnection(CircuitPath connection) {
		/**
		 * adds an established connection on the board by adding the circuit path to the
		 * connections list as well as adding the connected components to the hardware
		 * components list (ignores redundancy)
		 * 
		 * @param connection of a type CircuitPath
		 */
		connections.add(connection);
		hwComponents.add(connection.getComponent1());
		hwComponents.add(connection.getComponent2());
		System.out.print("Circuit added\n");
	}

	public Float calculatePrice() {
		/**
		 * calculates the sum of all hardware components placed on the board
		 * 
		 * @return returns a float value which is the sum of the price of all hardware
		 *         components
		 */
		float sum = 0;
		for (HardwareComponent component : hwComponents) {
			sum += component.getPrice();
		}
		return sum;
	}

	public Float calculateCircuitPrice() {
		/**
		 * calculates the price of all circuit placed on the board
		 * 
		 * @return returns a float value which is the sum of the price of all
		 *         connections
		 */
		float sum = 0;
		for (CircuitPath connection : connections) {
			sum += connection.getComponent1().getPrice() + connection.getComponent2().getPrice();
		}
		return sum;
	}

	public void showConnectionDetails() {
		/**
		 * shows all informations on the PCB about the circuits and their connected
		 * components
		 */
		if (connections.isEmpty() == true) {
			System.out.println("No connections on the circuit boar");
		} else {
			int counter = 1;
			System.out.println(String.format("%15s%15s%15s", "ID", "Typ", "Price"));
			for (CircuitPath connection : connections) {
				System.out.println(String.format("Connection %d", counter));
				System.out.println(String.format("%15s%15s%15f", connection.getComponent1().getId(),
						connection.getComponent1().getClass().getName(), connection.getComponent1().getPrice()));
				System.out.println(String.format("%15s%15s%15f\n", connection.getComponent2().getId(),
						connection.getComponent2().getClass().getName(), connection.getComponent2().getPrice()));
				counter += 1;
			}
			System.out.println(String.format("---------------------------------------------"));
			System.out.println(String.format("PCB Price: (only connections): %14f", calculateCircuitPrice()));
			System.out.println(String.format("PCB Price: (all components): %16f", calculatePrice()));
		}
	}

	public void showHardwareComponents() {
		if (hwComponents.isEmpty() == true)
			System.out.println("No Components placed on the PCB.");

		for (HardwareComponent component : hwComponents) {
			System.out.println(component.getClass().getName());
		}
	}

}