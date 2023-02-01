public class LinkedList {

    public static void main(String []args) {
      // Write your code here:    
      LinkedList seasons = new LinkedList();
      seasons.addToHead("summer");
      seasons.addToHead("spring");
      seasons.addToTail("fall");
      seasons.addToTail("winter");
      seasons.removeHead();
      seasons.printList();

      //test swap method
      seasons.swap("summer", "fall");
      seasons.printList();
  
    }
  
      public Node head;
  
      public LinkedList() {
          this.head = null;
      }
  
    public void addToHead(String data) {
      Node newHead = new Node(data);
      Node currentHead = this.head;
      this.head = newHead;
      if (currentHead != null) {
        this.head.setNextNode(currentHead);
      }
    }
  
    public void addToTail(String data) {
      Node tail = this.head;
      if (tail == null) {
        this.head = new Node(data);
      } else {
        while (tail.getNextNode() != null) {
          tail = tail.getNextNode();
        }
          tail.setNextNode(new Node(data));
      }
    }  
  
    public String removeHead() {
      Node removedHead = this.head;
      if (removedHead == null) {
        return null;
      }
      this.head = removedHead.getNextNode();
      return removedHead.data;
    }
  
    public String printList() {
      String output = "<head> ";
      Node currentNode = this.head;
      while (currentNode != null) {
        output += currentNode.data + " ";
        currentNode = currentNode.getNextNode();
      }
      output += "<tail>";
      System.out.println(output);
      return output;
    }

    //challenge method - swaps two nodes within the list
    public void swap(String data1, String data2) {
        Node n1 = null;
        Node n1Prev = null;
        boolean n1f = false;
        Node n2 = null;
        Node n2Prev = null;
        boolean n2f = false;
        //check if either node is the head
        if (this.head.data == data1) {
            n1 = this.head;
            n1Prev = null;
            n1f = true;
        }
        if (this.head.data == data2) {
            n2 = this.head;
            n2Prev = null;
            n2f = true;
        }
        if (!n1f) {
            n1Prev = this.head;
            n1 = this.head.getNextNode();
            while (!n1f) {
                if (n1.data == data1) {
                    n1f = true;
                } else {
                    n1Prev = n1;
                    n1 = n1.getNextNode();
                    if (n1 == null) {
                        break;
                    }
                }
            }
        }
        if (!n2f) {
            n2Prev = this.head;
            n2 = this.head.getNextNode();
            while (!n2f) {
                if (n2.data == data2) {
                    n2f = true;
                } else {
                    n2Prev = n2;
                    n2 = n2.getNextNode();
                    if (n2 == null) {
                        break;
                    }
                }
            }
        }
        if (n1f && n2f) {
            //switch previous node pointers
            if (n1Prev != null) {
                n1Prev.setNextNode(n2);
            } else {
                this.head = n2;
            }
            if (n2Prev != null) {
                n2Prev.setNextNode(n1);
            } else {
                this.head = n1;
            }
            //switch next node pointers
            Node temp1 = n1.getNextNode();
            n1.setNextNode(n2.getNextNode());
            n2.setNextNode(temp1);
        }
    }
  
  }