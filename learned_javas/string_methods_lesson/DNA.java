public class DNA {
  public static void main(String[] args) {
    String dna1 = "ATGCGATACGCTTGA";
    String dna2 = "ATGCGATACGTGA";
    String dna3 = "ATTAATATGTACTGA";
    String dna = dna3;
    int dnaLength = dna.length();
    int atg = dna.indexOf("ATG");
    int tga = dna.indexOf("TGA");
    String protein = "";
    if (atg > -1 && tga > 2) {
      if ((tga - (atg + 3)) % 3 == 0) {
        protein = dna.substring(atg+3, tga);
      } else {
        System.out.println("No protein");
      }
    } else {
      System.out.println("No protein");
    }
    if (protein.length() > 0) {
      System.out.println("Contains a protein");
    }
  }
}