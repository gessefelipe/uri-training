/*

URI Online Judge | 1103

Alarme Despertador

Daniela é enfermeira em um grande hospital, e tem os horários de trabalho muito variáveis. Para piorar, ela tem sono pesado, e uma grande dificuldade para acordar com relógios despertadores.

Recentemente ela ganhou de presente um relógio digital, com alarme com vários tons, e tem esperança que isso resolva o seu problema. No entanto, ela anda muito cansada e quer aproveitar cada momento de descanso. Por isso, carrega seu relógio digital despertador para todos os lugares, e sempre que tem um tempo de descanso procura dormir, programando o alarme despertador para a hora em que tem que acordar. No entanto, com tanta ansiedade para dormir, acaba tendo dificuldades para adormecer e aproveitar o descanso.

Um problema que a tem atormentado na hora de dormir é saber quantos minutos ela teria de sono se adormecesse imediatamente e acordasse somente quando o despertador tocasse. Mas ela realmente não é muito boa com números, e pediu sua ajuda para escrever um programa que, dada a hora corrente e a hora do alarme, determine o número de minutos que ela poderia dormir.
Entrada

A entrada contém vários casos de teste. Cada caso de teste é descrito em uma linha, contendo quatro números inteiros H  1 , M 1 , H2 e M 2, com H1:M1 representando a hora e minuto atuais, e H2:M2 representando a hora e minuto para os quais o alarme  despertador foi programado (0≤H1≤23, 0≤M1≤59, 0≤H2≤23, 0≤M2 ≤59).

O final da entrada é indicado por uma linha que contém apenas quatro zeros, separados por espaços em branco.
Saída

Para cada caso de teste da entrada seu programa deve imprimir uma linha, cada uma contendo um número inteiro, indicando o número de minutos que Daniela tem para dormir.

*/

#include <stdio.h>

int main(){
    int a,b,c,d;
    int inicio, fim;
    
    while(1){
             scanf("%d %d %d %d",&a,&b,&c,&d);
             if(a == 0 && b == 0 && c == 0 && d == 0) break;
             
             if(a == 0) inicio = 24*60 + b;
             else inicio = a*60 + b;
             
             if(c == 0) fim = 24*60 + d;
             else fim = c*60 + d;
             
             if(fim > inicio) printf("%d\n", fim-inicio);
             else printf("%d\n", 24*60 - (inicio-fim));
    }
    return 0;
}