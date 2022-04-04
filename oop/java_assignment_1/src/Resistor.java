public class Resistor extends HardwareComponent {
	/**
	 * @author Szelcsanyi Boris, 12102553
	 */
	private Integer resistanceValue;

	public Resistor() {
	}

	public Resistor(String id, Float price, Integer resistanceValue) {
		super(id, price);
		this.resistanceValue = resistanceValue;
	}

	public Integer getResistanceValue() {
		return resistanceValue;
	}

	public void setResistanceValue(Integer value) {
		resistanceValue = value;
	}
}