#include <iostream>

using namespace std;

// THORIQ KUSUMA / 225150301111032

struct Node
{
  int data;
  Node *prev;
  Node *next;
};

Node *head, *tail, *newNode, *del, *cur;

bool isEmpty()
{
  if (head == NULL)
  {
    return true;
  }
  return false;
}

Node *createNewNode(int data)
{
  newNode = new Node();
  newNode->data = data;
  newNode->next = newNode;
  newNode->prev = newNode;
  return newNode;
}

void addFirst(int data)
{
  createNewNode(data);
  if (isEmpty())
  {
    head = newNode;
    tail = head;
    head->next = head;
    head->prev = head;
    tail->next = head;
    tail->prev = head;
  }
  else
  {
    newNode->prev = tail;
    newNode->next = head;
    head->prev = newNode;
    tail->next = newNode;
    head = newNode;
  }
}

void addLast(int data)
{
  createNewNode(data);
  if (isEmpty())
  {
    head = newNode;
    tail = head;
    head->next = head;
    head->prev = head;
    tail->next = head;
    tail->prev = head;
  }
  else
  {
    newNode->prev = tail;
    newNode->next = head;
    tail->next = newNode;
    tail = newNode;
  }
}

void addAt(int data, int at)
{
  createNewNode(data);
  if (!isEmpty())
  {
    int index = 0;
    cur = head;
    while (index < at)
    {
      cur = cur->next;
      index++;
      if (cur->next == head)
      {
        break;
      }
    }
    if (cur->prev == tail)
    {
      addFirst(data);
    }
    else if (cur->next == head)
    {
      addLast(data);
    }
    else
    {
      cur->prev->next = newNode;
      newNode->prev = cur->prev;
      newNode->next = cur;
      cur->prev = newNode;
    }
  }
}

void deleteFirst()
{
  if (!isEmpty())
  {
    del = head;
    del->prev = NULL;
    head = head->next;
    del->next = NULL;
    head->prev = tail;
    tail->next = head;
    delete del;
  }
}

void deleteLast()
{
  if (!isEmpty())
  {
    del = tail;
    del->next = NULL;
    tail = tail->prev;
    del->prev = NULL;
    tail->next = head;
    head->prev = tail;
    delete del;
  }
}

void deleteAt(int at)
{
  if (!isEmpty())
  {
    int index = 0;
    cur = head;
    while (index < at)
    {
      cur = cur->next;
      index++;
      if (cur->next == head)
      {
        break;
      }
    }
    if (cur->prev == tail)
    {
      deleteFirst();
    }
    else if (cur->next == head)
    {
      deleteLast();
    }
    else
    {
      del = cur;
      cur = cur->prev;
      del->prev = NULL;
      cur->next = del->next;
      del->next = NULL;
      cur->next->prev = cur;
      delete del;
    }
  }
}

void rotate()
{
  if (!isEmpty())
  {
    cur = tail;
    head = cur;
    tail = cur->prev;
  }
}

void printList()
{
  if (head == NULL)
  {
    cout << "Buat link list terlebih dahulu!!\n";
  }
  else
  {
    cur = head;
    while (cur->next != head)
    {
      cout << cur->data << " ";
      cur = cur->next;
    }
    cout << cur->data << " \n";
  }
}

int main()
{
  addLast(1);
  addLast(2);
  addLast(3);
  addLast(4);
  addLast(5);
  printList();
  rotate();
  printList();
  rotate();
  printList;
  return 0;
}