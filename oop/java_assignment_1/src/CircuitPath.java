public class CircuitPath {
	/**
	 * @author Szelcsanyi Boris, 12102553
	 */
	private HardwareComponent hwComponent1;
	private HardwareComponent hwComponent2;

	public CircuitPath(HardwareComponent hwComponent1, HardwareComponent hwComponent2) {
		this.hwComponent1 = hwComponent1;
		this.hwComponent2 = hwComponent2;
	}

	public HardwareComponent getComponent1() {
		return hwComponent1;
	}

	public HardwareComponent getComponent2() {
		return hwComponent2;
	}

	// refactor
	public HardwareComponent[] getComponents() {
		HardwareComponent[] components = new HardwareComponent[2];
		components[0] = hwComponent1;
		components[1] = hwComponent2;

		return components;
	}

	// optional methods (not part of task)

	public String getIdComponent1() {
		return hwComponent1.getId();
	}

	public String getIdComponent2() {
		return hwComponent2.getId();
	}

	public Float getPriceComponent1() {
		return hwComponent1.getPrice();
	}

	public Float getPriceComponent2() {
		return hwComponent2.getPrice();
	}

}