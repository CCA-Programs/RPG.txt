#ifndef ITEM_H
#define ITEM_H

class Item {
    public: 
        Item();
        ~Item();
        
        void addItem(Item *);
  
  private:
        int items[];
};
