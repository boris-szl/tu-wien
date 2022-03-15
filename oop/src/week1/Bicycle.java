
import java.util.*;


public class Bicycle {
	private int currentGear;
	private float currentSpeed;
	private float currentCadence;


	// Konstruktor
	public Bicycle(int currentGear, float currentSpeed, float currentCadence) {
		this.currentGear = currentGear;
		this.currentSpeed = currentSpeed;
		this.currentCadence = currentCadence;
	}

	public void changeGears(int currentGear) {
		this.currentGear = currentGear;
	}

	public float getCurrentSpeed() {
		return this.currentSpeed;
	}

	public static void main(String[] args) {
		Object myBike = new Bicycle(10, 60, 5);
		Object yourBike = new Bicycle(10, 40, 4);

		System.out.println("Hello Bike");
	}
}

