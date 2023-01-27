public class Language {
  protected String name;
  protected int numSpeakers;
  protected String regionsSpoken;
  protected String wordOrder;

  Language(String name, int numSpeakers, String regionsSpoken, String wordOrder) {
    this.name = name;
    this.numSpeakers = numSpeakers;
    this.regionsSpoken = regionsSpoken;
    this.wordOrder = wordOrder;
  }

  public void getInfo() {
    System.out.println(this.name + " is spoken by " + this.numSpeakers + " people mainly in " + this.regionsSpoken + ".\nThe language follows the word order: " + this.wordOrder + ".");
  }

  public static void main(String[] args) {
    Mayan mayan = new Mayan("Mayan", 16000);
    mayan.getInfo();
    SinoTibetan m = new SinoTibetan("Mandarin Chinese", 1000000);
    SinoTibetan b = new SinoTibetan("Burmese", 300000);
    m.getInfo();
    b.getInfo();
  }
}