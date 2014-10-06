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
  char *fdsa = strchr(asdf, ", ");
  return memchr(fdsa, ',', strlen(fdsa));
}

char *getNextHallplats(char *asdf){//tar emot en rad fr�n n�tverk.txt och returnerar h�llplatsen bussen ankommer till
  char *fdsa = strchr(strchr(asdf, ", "), ", ");
  return memchr(fdsa, ',', strlen(fdsa));
}

char *getBus(char *asdf){//tar emot en rad fr�n n�tverk.txt och returnerar bussnumret
  return memchr(asdf, ',', strlen(asdf));
}

int getTravelTime(char *asdf){//tar emot en rad fr�n n�tverk.txt och returnerar restiden
  return strchr(strchr(strchr(asdf, ", "), ", "), ", ");
}

void addTimeTable(node hallplats, char *busNumber, char *slutstationer_){//l�gger till alla avg�ngstider f�r busNumber fr�n hallplats baserat p� start.txt
  FILE slutstationer = fopen(slutstationer_);
  char buffer[128];
  while(feof(slutstationer)){
    fgets(buffer, sizeof(buffer), slutstationer);
    if(strcmp(busNumber, getBus(buffer)) == 0 && strcmp(hallplats->name, getHallplats(buffer)) == 0)
      addTimeBL�H�(hallplats, buffer);
  }
}

void addTimes(node hallplats, node nextHallplast, int travelTime, char *busNumber){//l�gger till all tider en buss ankommer till/avg�r fr�n nextHallplast
  nextHallplats->timeBL�H� = addShitBL�H�(nextHallplats->timeBL�H�, travelTime, busNumber);
  //metainfo f�r reverseTimetable
}

void reverseTimetable(asdf){//g�r "bakl�nges" fr�n en slutstation och l�gger till alla tider fr�n dess riktning
  addTimeTable(hallplats, busNumber, slutstationer);
  while(hallplats->METAINFO){//"f�reg�ende" h�llplats finns
    addTimes(hallplats, hallplats->METAINFO, hallplats->METAINFO, busNumber); //"f�reg�ende" h�llplats / resetid
    hallplats = hallplats->METAINFO; //"f�reg�ende" h�llplats
  }
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
    //nextHallplats = getHallplats(buffer);
    if(strcmp(nextHallplats, getHallplats(buffer)) == 0){
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
