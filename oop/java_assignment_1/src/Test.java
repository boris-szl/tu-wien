public class Test {
	public static void main(String[] args) throws Exception {
		/**
		 * @author Szelcsanyi Boris, 12102553
		 */
		System.out.println("Building Printed Circuit Board");

		// we create an instance of the resistor class
		// we create a resistor
		Resistor resistor1 = new Resistor("ID_1", 0.07f, 1000);
		// check if resistor1 is class
		System.out.println(resistor1.getClass().getSimpleName());

		// try to get id and price, because getId method is defined in abstract class
		System.out.println(String.format("ID = %s and price = %s.", resistor1.getId(), resistor1.getPrice()));
		// getting the resistance value
		System.out.println(resistor1.getResistanceValue());

		// we create an instance of the capacitor class
		Capacitor capacitor1 = new Capacitor("ID_2", 0.03f, 1.0f);
		// check if right class
		System.out.println(capacitor1.getClass().getSimpleName());
		// check for polymorphism
		System.out.println(
				String.format("Capacitor1 ID = %s and price = %s.", capacitor1.getId(), capacitor1.getPrice()));
		// get capacitor value
		System.out.println(capacitor1.getCapacitorValue());
		// change capacitor value
		capacitor1.setCapacitorValue(2.0f);
		// verify change
		System.out.println(String.format("New capacitor value for capacitor1 = %s", capacitor1.getCapacitorValue()));

		CircuitPath path1 = new CircuitPath(resistor1, capacitor1);
		// get first component
		System.out.println(path1.getComponent1());
		// get second component
		System.out.println(path1.getComponent2());
		// get both components
		System.out.println(path1.getComponents());

		// get componentid on circuit path
		System.out.println(path1.getIdComponent1());

		// get price of component1 on circuit path
		System.out.println(String.format("Price of first component on circuit path $ %s", path1.getPriceComponent1()));

		// create PCB object, where object is instance of class PCB
		// we create a PCB
		PCB board1 = new PCB();

		// we add two components, resistor1 and capacitor1, to the PCB
		board1.placeComponent(resistor1);
		board1.placeComponent(capacitor1);

		// test connectComponents method
		System.out.println(board1.connectComponents(resistor1, capacitor1));

		PCB emptyBoard = new PCB();
		System.out.println(emptyBoard.connectComponents(resistor1, capacitor1)); // should return boolean value false

		// create instance of PCB class with only one components
		PCB board2 = new PCB();
		board2.placeComponent(new Resistor("ID_3", 0.06f, 1200));

		// test showHardwareComponents
		board1.showHardwareComponents();
		emptyBoard.showHardwareComponents();
		board2.showHardwareComponents();

		// Price of all hardware components on the board
		System.out.println(board1.calculatePrice());

		try {
			board1.placeComponent(resistor1);
		} catch (Exception e) {
			e.printStackTrace();
		}
		try {
			board1.placeComponent(resistor1);
		} catch (Exception e) {
			e.printStackTrace();
		}
		try {
			Resistor resistor3 = new Resistor("ID_4", 0.08f, 1375);
			board1.placeComponent(resistor3);
		} catch (Exception e) {
			e.printStackTrace();
		}

		board1.showHardwareComponents();

		// testing method : connectionDetails
		board1.showConnectionDetails();
	}
}
