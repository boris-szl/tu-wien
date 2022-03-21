public interface ITresorZugriff {
	void displayStatusLCD(boolean status, String text);
	void displayStatusLED(boolean status);

	int getKeyCode();

	boolean unlockDoor();

	boolean lockDoor();

}