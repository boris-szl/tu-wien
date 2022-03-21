public abstract class Tresor {
	private ITresorZugriff TresorZugriff = null;
	public abstract void displayStatus(boolean status, String text);
}

public class LCDTresor extends Tresor {
	public void displayStatus(boolean status, String text) {
		this.getTresorZugriff().displayStatusLCD(status, text);
	}
}
