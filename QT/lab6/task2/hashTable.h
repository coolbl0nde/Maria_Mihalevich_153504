#ifndef HASHTABLE_H
#define HASHTABLE_H

#include "stack.h"
#include <QString>

class HashTable{
  int capacity;
  stack<int>* table;

public:
  HashTable()
  {
      capacity = 10;
      table = new stack<int>[capacity];
  }

  ~HashTable()
  {
      delete[] table;
  }

  int hash(int key){
      return (key % capacity);
  }

  void insert(int key){
      int index = hash(key);

      table[index].push(key);
  }

  int find(int key){
      int index = hash(key);
      stack<int> arr = table[index];
      int size_arr = arr.size();

      for (int i = 0; i < size_arr; i++){
          if (arr.top() == key){
              arr.pop();
              return index;
          }else{
              arr.pop();
          }
      }
      return -1;
  }

  int findMin(){
      int min = 364, indexMin = -1;

      for (int i = 0; i < capacity; i++){
          stack<int> arr = table[i];
          int size_arr = (int)table[i].size();

          for (int j = 0; j < size_arr; j++){
              if (arr.top() <= min){
                  min = arr.top();
                  indexMin = i;
                  arr.pop();
              }else{
                  arr.pop();
              }
          }
      }
      return indexMin;
  }

  void remove(int key){
      int index = hash(key);

      stack<int> arr = table[index];
      stack<int> arr_new;

      int size_arr = (int)arr.size();
      bool find = false;

      for (int i = 0; i < size_arr; i++)
      {
          if (arr.top() != key || find){
              arr_new.push(arr.top());
              arr.pop();
          }else{
              find = true;
              arr.pop();
          }
      }
      int sizeTmpNew = (int)arr_new.size();

      for (int i = 0; i < sizeTmpNew; i++){
          arr.push(arr_new.top());
          arr_new.pop();
      }

      table[index] = arr;
  }

  bool empty(){
      for (int i = 0; i < capacity; i++){
          if (!table[i].empty()){
              return false;
          }
      }
      return true;
  }

  QString printTable()
  {
      QString hash_table;

      for (int i = 0; i < capacity; i++){
          stack<int> reverseOrder;
          stack<int> arr = table[i];
          int size_arr = (int)arr.size();

          for (int j = 0; j < size_arr; j++){
              reverseOrder.push(arr.top());
              arr.pop();
          }

          int sizeReverse = (int)reverseOrder.size();

          for (int j = 0;  j < sizeReverse; j++){
              hash_table.push_back(QString::number(reverseOrder.top()));
              hash_table.push_back(' ');
              reverseOrder.pop();
          }
          hash_table.push_back('\n');
      }

      return hash_table;
  }

};

#endif // HASHTABLE_H
