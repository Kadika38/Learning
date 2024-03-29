package pti_java.dijkstras_algorithm_lesson;

import java.util.ArrayList;

public class Vertex {

	private String data;
	private ArrayList<Edge> edges;
	
	public Vertex(String inputData) {
		this.data = inputData;
		this.edges = new ArrayList<Edge>();
	}
	
	public String getData() {
		return this.data;
	}

	public ArrayList<Edge> getEdges(){
		return this.edges;
	}

	public void addEdge(Vertex v, int weight) {
		this.edges.add(new Edge(this, v, weight));
	}
	
	public void removeEdge(Vertex v) {
		//I don't love this solution, we don't teach removeIf
		this.edges.removeIf(e -> e.getEnd().equals(v));
	}
	
	public void print() {
		String message = "";
		
		if(this.edges.size() == 0) {
			System.out.println(this.data + " -->");
			return;
		}
		
		for(int i = 0; i < this.edges.size(); i++) {
			if(i == 0) {
				message += this.edges.get(i).getStart().data + " -->  ";
			}
			message += this.edges.get(i).getEnd().data + " (" + this.edges.get(i).getWeight() + ")";
			if (i != this.edges.size() - 1) {
				message += ", ";
			}
		}
		System.out.println(message);
	}
}