import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
	    
	    String nome;
	    float num1, num2, total;
	    
	    Scanner tela = new Scanner(System.in);
	    
	    System.out.println("BOM DIA!\nescreva seu nome:");
	    nome = tela.next();
	    System.out.print("Seu nome é "+nome); System.out.println(", que bonito!\n");
	    
		System.out.println("Digite o primeiro numero:");
		num1 = tela.nextFloat();
		System.out.println("Digite o segundo numero");
		num2 = tela.nextFloat();
		
		total = num1 + num2;
		
		System.out.println("A soma é: "+total);
	}
}
