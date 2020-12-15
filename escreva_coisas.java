package pacote_input_output;
import java.util.Scanner;

public class Escreva_coisas {
	
	public static void main(String[] args) {
		
		Scanner s = new Scanner(System.in);
		
		System.out.println("Digite algo: ");
		String algo = s.nextLine();
		
		System.out.println("Você escreveu '" + algo + "'");
	}
}
