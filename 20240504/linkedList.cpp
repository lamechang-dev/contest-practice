#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, m, n) for (int i = m; i < (int)(n); ++i)
#define rep3(i, n) for (int i = 1; i < (int)(n); i++)

struct Node {
    string name;
    Node *next;

    Node(string name_ = "") : name(name_), next(NULL) {}
};

Node *nil;

void init() {
    nil = new Node();
    nil->next = nil;
}

void printList() {
    Node *cur = nil->next;
    for (; cur != nil; cur = cur->next) {
        cout << cur->name << " -> ";
    }
    cout << endl;
}

void insert(Node *v, Node *p = nil) {
    v->next = p->next;
    p->next = v;
}

int main()
{
    init();

    Node *sato = new Node("sato");
    Node *ito = new Node("ito");
    Node *suzuki = new Node("suzuki");

    insert(sato);
    insert(ito, sato);
    insert(suzuki, ito);

    printList();
}