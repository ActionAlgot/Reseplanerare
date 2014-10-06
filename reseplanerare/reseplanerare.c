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
  char *fdsa = strchr(asdf, ", ");
  return memchr(fdsa, ',', strlen(fdsa));
}

char *getNextHallplats(char *asdf){//tar emot en rad från nätverk.txt och returnerar hållplatsen bussen ankommer till
  char *fdsa = strchr(strchr(asdf, ", "), ", ");
  return memchr(fdsa, ',', strlen(fdsa));
}

char *getBus(char *asdf){//tar emot en rad från nätverk.txt och returnerar bussnumret
  return memchr(asdf, ',', strlen(asdf));
}

int getTravelTime(char *asdf){//tar emot en rad från nätverk.txt och returnerar restiden
  return strchr(strchr(strchr(asdf, ", "), ", "), ", ");
}

void addTimeTable(node hallplats, char *busNumber, char *slutstationer_){//lägger till alla avgångstider för busNumber från hallplats baserat på start.txt
  FILE slutstationer = fopen(slutstationer_);
  char buffer[128];
  while(feof(slutstationer)){
    fgets(buffer, sizeof(buffer), slutstationer);
    if(strcmp(busNumber, getBus(buffer)) == 0 && strcmp(hallplats->name, getHallplats(buffer)) == 0)
      addTimeBLÄHÖ(hallplats, buffer);
  }
}

void addTimes(node hallplats, node nextHallplast, int travelTime, char *busNumber){//lägger till all tider en buss ankommer till/avgår från nextHallplast
  nextHallplats->timeBLÄHÖ = addShitBLÄHÖ(nextHallplats->timeBLÄHÖ, travelTime, busNumber);
  //metainfo för reverseTimetable
}

void reverseTimetable(asdf){//går "baklänges" från en slutstation och lägger till alla tider från dess riktning
  addTimeTable(hallplats, busNumber, slutstationer);
  while(hallplats->METAINFO){//"föregående" hållplats finns
    addTimes(hallplats, hallplats->METAINFO, hallplats->METAINFO, busNumber); //"föregående" hållplats / resetid
    hallplats = hallplats->METAINFO; //"föregående" hållplats
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
