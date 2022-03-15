

// Basisklasse (Familienklasse) Fahrzeug
public abstract class Fahrzeug {
	private String name = null;
	private double preis = 0;
	// Konstruktor für die Klasse Fahrzeug:
	// Jedem Fahrzeug wirdd beim Instanziieren ein Name zugewiesen
	public Fahrzeug(String name) {
		this.name = name;
	}
	public void setPreis(double preis) {
		this.preis = preis;
	}
	public double getPreis() {
		return this.preis;
	}
	public abstract int anzahlRaeder();
}

// Subklasse Auto
public class Auto extends Fahrzeug {
	private String kennzeichen = null;
	// Konstruktor für die Klasse Auto:
	public Auto(String name, String kennzeichen) {
		super(name);
		this.kennzeichen = kennzeichen;
	}

	public int anzahlRaeder() {
		return 4;
	}
}

// Subklasse (abgeleitet Klasse) Fahrrad
public class Fahrrad extends Fahrzeug {
	private String typ = null;
	// Konstruktor für die Klasse Fahrrad:
	public Fahrrad(String name, String typ) {
		super(name);
		this.typ = typ;
	}
	public int anzahlRaeder() {
		return 2;
	}
}

// Basisklaasse für Geschäft
public class Geschaeft {
	private List fahrzeugListe;
	// Konstruktor für die Klasse Geschäft:
	public Geschaeft() {
		fahrzeugListe = new ArrayList();

	}
	private int anzahlRaeder() {
		// Ermittle Anzahl der Raedder aller Fahrzeuge im Geschäft
	}
	private Fahrzeug teuerstesFahrzeug() {
		// Ermittle das teuerste Fahrzeug im Geschäft
	}
	// Main-Methode in Klasse Geschäft
	// Wird beim Aufruf des Programms gestartet
	// Im String-Array aargs werden die Kommando-Zeilen-Parameter übergeben
	public static void main(String[] args) {
		Geschaeft autohausmaier = new Geschaeft();
		int gesamtanzahlraeder = autohausmaier.anzahlRaeder();
		Fahrzeug teuerstesfz = autohausmaier.teuerstesFahrzeug();
	}
}


