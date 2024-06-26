#include <iostream>

using namespace std;

class No
{
    private:
        int v;
        No* prox;
    public:
        No(int v)
        {
            this->v = v;
            this->prox = NULL;
        }

        int obterValor()
        {
            return v;
        }

        No * obterProx()
        {
            return prox;
        }

        void setProx(No* p) 
        {
            prox = p;
        }
};

class Lista
{
    private: 
        No* cabeca;
        No* cauda;

    public:
        Lista()
        {
            cabeca = NULL;
            cauda = NULL;
        }

        Lista(int v)
        {
            cabeca = new No(v);
            cauda = cabeca;
        }

        virtual ~Lista() {
            delete cabeca;
        }

        void mostrar() 
        {
            cout << "Imprimindo todos os elementos... \n";
            No* c = cabeca;

            if(vazia()) 
                cout << "A lista nao possui elementos!!";
            else
            {
                while(c)
                {
                    cout << c->obterValor() << endl;
                    c = c->obterProx();
                }
                cout << endl;
            }
        }

        bool vazia() 
        {
            return (cabeca==NULL);
        }

        void inserir_inicio(int v)
        {
            No* novo_no = new No(v);

            novo_no -> setProx(cabeca);

            cabeca = novo_no;
        }

        void inserir_final(int v) 
        {
            No* novo_no = new No(v);

            if(vazia()) 
            {
                cabeca = novo_no;
                cauda = novo_no;
            }
            else 
            {
                cauda->setProx(novo_no);
            }
        }
};

int main() 
{
    return 0;
}