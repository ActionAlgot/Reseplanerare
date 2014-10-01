#include <string.h>
#include <stdio.h>
#include <stdlib.h>

struct bNode{//buss
  int times;//tider
  node dest;//nästa hållplats
}

struct node{//hållplats
  char *name;
  list bussar;
}

char *getHallplats(char *asdf){ //tar emot en rad från nätverk.txt och returnerar hållplatsen
}

char *getNextHallplats(char *asdf){//tar emot en rad från nätverk.txt och returnerar hållplatsen bussen ankommer till
}

char *getBus(char *asdf){//tar emot en rad från nätverk.txt och returnerar bussnumret
}

int getTravelTime(char *asdf){//tar emot en rad från nätverk.txt och returnerar restiden
}

void addTimeTable(node hallplats, char *busNumber, char *slutstationer){//lägger till alla avgångstider för busNumber från hallplats baserat på start.txt
}

void addTimes(node hallplats, node nextHallplast, int travelTime){//lägger till all tider en buss ankommer till/avgår från nextHallplast
}

void reverseTimetable(asdf){//går "baklänges" från en slutstation och lägger till alla tider från dess riktning
}

node makeMap(char *bussar_, char *slutstationer_){
  FILE *bussar = fopen(bussar_, "r");
  char buffer[128];
  list hallplatser;
  node hallplats;
  node nextHallplats;

  char *busNumber;
  int travelTime;

  fgets(buffer, sizeof(buffer), bussar);
  while(!feof(bussar)){
    hallplats = getHallplats(buffer);
    nextHallplats = getNextHallplast(buffer);
    busNumber = getBus(buffer);
    travelTime = getTravelTime(buffer);
    if(notInlist(hallplats, hallplatser)){
      addToList(hallplats, hallplatser);
      addTimeTable(hallplats, busNumber, slutstationer_);
    }
    fgets(buffer, sizeof(buffer), bussar);
    nextHallplats = getHallplats(buffer);
    if(strcmp(hallplats, nextHallplats) == 0){
      addTimes(hallplats, nextHallplats, travelTime);
      if(notInList(nextHallplats, hallplatser)){
	addToList(nextHallplats, hallplatser);
      }
    }
    else reverseTimetable(asdfg);
  }
}


void newNode(){//node -> hallplats
  addToList(hallplats, hallplatser);
}

void removeNode(){
  if (hallplats, hallplatser) 
}

void addBow(node1, node2, weight){//tid mellan node
  
}

void removeBow(node1, node2){

}

void shortRoute(node1, node2){ //a -> b weight of bow

}
