//import java.util.ArrayList;

import java.util.Scanner;

public class Main
{
	public static void main(String[] args)
	{
		Scanner x = new Scanner(System.in);

		System.out.print("Digite o tamanho do vetor: ");

		int tam = x.nextInt();

		int[] vetor = new int[tam];

		fill(vetor, tam);

		System.out.println("Array original: ");
		
		print(vetor, tam);

		insertionSort(vetor, tam);

		System.out.println("Array com insertion sort: ");

		print(vetor, tam);

		x.close();
	}

	public static void fill(int[] vetor, int tam)
	{
		Scanner x = new Scanner(System.in);
		for(int i = 0;i < tam;i++)
		{
			int c = i + 1;
			System.out.print("Digite o numero na posicao " + c + ": ");
			vetor[i] = x.nextInt();
		}
		x.close();
	}

	public static void insertionSort(int[] vetor, int tam) 
	{
        for (int i = 1; i < tam; i++) 
		{
            int verificador = vetor[i];
            int j = i - 1;
            while (j >= 0 && vetor[j] > verificador) 
			{
                vetor[j + 1] = vetor[j];
                j--;
            }
            vetor[j + 1] = verificador;
        }
    }

	public static void print(int[] vetor, int tam)
	{
		for(int i = 0;i < tam;i++)
		{
			System.out.println("array[" + i + "] = " + vetor[i]);
		}
	}
}
