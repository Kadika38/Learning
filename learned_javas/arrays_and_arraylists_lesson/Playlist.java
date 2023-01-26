import java.util.ArrayList;

class Playlist {
  
  public static void main(String[] args) {
    ArrayList<String> desertIslandPlaylist = new ArrayList<String>();
    desertIslandPlaylist.add("OMG");
    desertIslandPlaylist.add("Kickflip");
    desertIslandPlaylist.add("roll the windows up");
    desertIslandPlaylist.add("608");
    desertIslandPlaylist.add("Gucci Knife");
    desertIslandPlaylist.add("Sorry Mama");
    System.out.println(desertIslandPlaylist);
    System.out.println(desertIslandPlaylist.size());
    desertIslandPlaylist.remove("608");
    //switch placement of two songs
    int rtwu = desertIslandPlaylist.indexOf("roll the windows up");
    int omg = desertIslandPlaylist.indexOf("OMG");
    String a = "OMG";
    desertIslandPlaylist.set(omg, desertIslandPlaylist.get(rtwu));
    desertIslandPlaylist.set(rtwu, a);
    System.out.println(desertIslandPlaylist);
  }
  
}