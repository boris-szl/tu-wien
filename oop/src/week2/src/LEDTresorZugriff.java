public class LEDTresorZugriff implements ITresorZugriff {
    public void displayStatusLCD(boolean status, String text) {
        // keine Implementierung, da nicht verwendet wird
    }
    public void displayStatusLED(boolean status, String text) {
        // Stub mit Test-Implementierung
        System.out.println("{}, {}", status, text);
    }

    public int getKeyCode() {
        // Stub mit Test-Implementierung:
        // Eingabe einer n-Dezimalzahl und Rückgabe einer n-Dezimalzahl
    }

    public boolean unlockDoor() {
        // Stub mit Test-Implementierung:
        return true;
    }

    public boolean lockDoor() {
        // Stub mit Test-Implementierung:
        return true;
    }
}