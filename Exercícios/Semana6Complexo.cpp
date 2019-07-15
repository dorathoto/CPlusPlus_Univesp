#include <stack>
#include <iostream>

using namespace std;


int main()
{
    stack<float> notas; //aqui é a nosta lista (pilha) é como se fosse varias variaveis (não sei quantas) visto que o usuario q define a qtd de atividades, por isso o uso da pilha
    int numAtividades=0;
    float nota,somaNotas, mediaAtividades, mediaAtividadePeso, notaProva, notaProvaPeso, mediaFinal;
    //Tenho bastante variaveis uma para cada, para facilitar o entendimento
    //Tamanho coloco nome de variaveis grandes para facil entendimento

    cout << "Quantas atividades teve esse bimestre?  \n" << endl, cin >> numAtividades;
    //cout e cin na mesma linha, separado por virgula

    //aqui é um laço, esse codigo vai retetir até que a condição seja atingida (n menor que numAtividades+1) que foi informada pelo user;
    for(int n =1; n < (numAtividades+1); n++)
    {
        cout << "Informe a nota da atividade  "<< n << ": " <<endl,    cin >> nota;
        notas.push(nota);
        //aqui eu uso o push que é o padrão para inserir valor na pilha
    }
    //outro laço, vai repetir até q a qtd. de itens na pilhs seja maior que zero, ou seja repete enquanto tem itens
    while(notas.size() > 0)
    {
        somaNotas += notas.top();   //.top pego o valor no top da pilha e somo na variavel soma das notas

        notas.pop();    //removo o item do topo com o comando pop, vou removendo até que não tenha mais nda e dai sai do laço
    }
    mediaAtividades = somaNotas/numAtividades;
    mediaAtividadePeso = mediaAtividades * 0.4;

    cout << "informe a nota da prova?  \n" << endl;cin >> notaProva; // aqui é 2 comandos na mesma linhas, mas na verdade tem um ponto e virgula então é como se cada um estivesse em uma linha
    notaProvaPeso = notaProva * 0.6;

    mediaFinal = (notaProvaPeso+mediaAtividadePeso)/2;

     system("cls");
    cout << "Sua media atividades.: " <<mediaAtividades<<endl;
    cout << "Sua media Final: " <<mediaFinal<<endl;

}
