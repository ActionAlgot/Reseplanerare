#include <string.h>
#include <stdio.h>
#include <stdlib.h>

struct bNode{//buss
  int times;//tider
  node dest;//n�sta h�llplats
}

struct node{//h�llplats
  char *name;
  list bussar;
}

char *getHallplats(char *asdf){ //tar emot en rad fr�n n�tverk.txt och returnerar h�llplatsen
}

char *getNextHallplats(char *asdf){//tar emot en rad fr�n n�tverk.txt och returnerar h�llplatsen bussen ankommer till
}

char *getBus(char *asdf){//tar emot en rad fr�n n�tverk.txt och returnerar bussnumret
}

int getTravelTime(char *asdf){//tar emot en rad fr�n n�tverk.txt och returnerar restiden
}

void addTimeTable(node hallplats, char *busNumber, char *slutstationer){//l�gger till alla avg�ngstider f�r busNumber fr�n hallplats baserat p� start.txt
}

void addTimes(node hallplats, node nextHallplast, int travelTime){//l�gger till all tider en buss ankommer till/avg�r fr�n nextHallplast
}

void reverseTimetable(asdf){//g�r "bakl�nges" fr�n en slutstation och l�gger till alla tider fr�n dess riktning
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
