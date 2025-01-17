#include<stdio.h>//nesting of structures inside one another
int main()
{  typedef struct maruti{//a structure datatype delcaration
     int capacity;//structure members
     int wheeler;
  }maruti;
  typedef struct engine{//a structure datatype delcaration
   maruti car;//nesting of previous structure that can be used with the name car.something
    int cc; //structure members
    int hp;
  }engine;
  typedef struct bolts{//a structure datatype delcaration
    engine eng;//nesting of previous structure that can be used with the name eng.something
    int no_bolts;//structure members
  }bolts;

  bolts maruti800;//by declaring the structure variable type of bolts we can actually access the members of all 3 structures by using there name and with (.)dot operater
  maruti800.no_bolts = 3;//initialization of various strucutre members
  maruti800.eng.cc = 800;
  maruti800.eng.hp = 38;
  maruti800.eng.car.capacity = 4;
  maruti800.eng.car.wheeler = 4;

    return 0;
}