/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package alistaadhoc;

import java.util.ArrayList;
import java.util.Scanner;

/**
 *
 * @author Thati
 */
public class AListaAdHoc {

    public static void main(String[] args) {
        ArrayList<String> listaResultado;
        int qtd, p;
        String linha2;
        String[] vS;

        listaResultado = new ArrayList<>();
        Scanner ler = new Scanner(System.in);

        qtd = ler.nextInt();
        ler.nextLine();
        linha2 = ler.nextLine();

        vS = linha2.split(" ");

        p = vS.length;

        inicializaLista(listaResultado);

        for (int i = p - 1; i >= 0; i--) {
            String lista = vS[i];
            int index = lista.indexOf("1");
            
            
            if (index >= 0) {
                if (listaResultado.isEmpty()) {
                    listaResultado.add(index, String.valueOf(i + 2));
                } else {
                    String posString = listaResultado.get(index);
                    posString = posString + String.valueOf(i + 2);
                    listaResultado.set(index, posString);
                }
            }
        }

        for (int i = 0; i < listaResultado.size(); i++) {
            System.out.print(listaResultado.get(i));
        }
    }

    private static void inicializaLista(ArrayList<String> lista) {
        for (int i = 0; i < 100; i++) {
            lista.add(i, new String());
        }
    }
}
