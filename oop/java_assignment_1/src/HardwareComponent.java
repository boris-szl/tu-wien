public abstract class HardwareComponent {
	/**
	 * @author Szelcsanyi Boris, 12102553
	 */
	private String id; // class variable
	private Float price; // class variable

	public HardwareComponent() {
	}

	// Constructor
	public HardwareComponent(String id, Float price) {
		this.id = id;
		this.price = price;
	}

	// get and set methods
	public Float getPrice() {
		return price;
	}

	public void setPrice(Float price) {
		this.price = price;
	}

	// even if it is not part of the exercise, eclipse was giving me a warning
	// to define a getMethod for instance variable id
	public String getId() {
		return id;
	}

}