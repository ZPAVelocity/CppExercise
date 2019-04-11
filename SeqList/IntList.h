#ifndef __INTLIST_H__
#define __INTLIST_H__

typedef struct node
{
    int data;
    struct node *next;
} node;

class IntList
{
  public:
    IntList();
    ~IntList();
    int size();
    bool insertNode(int k, const int &e);
    int findNode(const int &e);
    bool deleteNode(int k);
    

  private:
    node *listHeader;
};

#endif