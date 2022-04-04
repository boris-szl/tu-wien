public class Capacitor extends HardwareComponent {
	/**
	 * @author Szelcsanyi Boris, 12102553
	 */
	private Float capacitorValue;

	public Capacitor(Float capacitorValue) {
		this.capacitorValue = capacitorValue;
	}

	public Capacitor(String id, Float price, Float capacitorValue) {
		super(id, price);
		this.capacitorValue = capacitorValue;
	}

	public Float getCapacitorValue() {
		return capacitorValue;
	}

	public void setCapacitorValue(Float value) {
		capacitorValue = value;
	}
}