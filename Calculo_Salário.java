import java.util.Scanner;

public class Calculo_Salário {

    public static void main(String[] args) {
        Scanner leitorDeEntrada = new Scanner(System.in);

        // Coleta o valor do salário
        System.out.print("\n\nDigite o valor do salário: ");
        float valorSalario = leitorDeEntrada.nextFloat();

        // Coleta o valor dos benefícios
        System.out.print("Digite o valor dos benefícios: ");
        float valorBeneficios = leitorDeEntrada.nextFloat();
        
        float valorImposto = 0;

        // Calcula o imposto de acordo com o salário
        if (valorSalario >= 0 && valorSalario <= 1100) {
            valorImposto = valorSalario * 0.05f;
        } else if (valorSalario >= 1101 && valorSalario <= 2500) {
            valorImposto = valorSalario * 0.10f;
        } else if (valorSalario > 2500) {
            valorImposto = valorSalario * 0.15f;
        }
        
        // Calculo do valor final
        float saida = valorSalario - valorImposto + valorBeneficios;
        System.out.println("O valor final é: " + String.format("%.2f", saida));
        
        // Fecha o Scanner
        leitorDeEntrada.close();
    }
}
