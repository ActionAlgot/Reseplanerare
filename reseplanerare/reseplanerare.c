#include <string.h>
#include <stdio.h>
#include <stdlib.h>

struct tlNode{
  int time;
  tNode tail;
}

struct bNode{//buss
  char *busNumber;
  tNode times;//tider
  hNode dest;//nästa hållplats
}

struct blNode{
  bNode buss;
  blNode tail;
}

struct hNode{//hållplats
  char *name;
  list bussar;
}

struct hlNode{
  hNode hallplats;
  hlNode tail;
}

int timeToInt(char *time){
  if(strlen(time) == 5)
    return ((time[0]-48)*10+time[1]-48)*60+((time[3]-48)*10+time[4]-48);
  return (time[0]-48)*60+((time[2]-48)*10+time[3]-48);
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

int getTime(char *asdf){
  return timeToInt(strchr(strchr(asdf, ", "), ", "));
}

void addBusStart(node hallplats, node nextHallplats, char *busNumber, char *slutstationer_){//lägger till alla avgångstider för busNumber från hallplats baserat på start.txt
  FILE slutstationer = fopen(slutstationer_);
  char buffer[128];
  bNode buss = malloc(sizeof(bNode));
  list timetable;
  strcpy(buss->busNumber, busNumber);
  buss->dest = nextHallplats;
  while(feof(slutstationer)){
    fgets(buffer, sizeof(buffer), slutstationer);
    if(strcmp(busNumber, getBus(buffer)) == 0 && strcmp(hallplats->name, getHallplats(buffer)) == 0){
      addToList(timetable, getTime(buffer));
    }
  }
  buss->times = timetable;
  addToList(hallplats->bussar, buss);
}

void addBus(node prevHallplats, node hallplats, int travelTime, char *busNumber){//lägger till all tider en buss ankommer till/avgår från nextHallplast
  bNode buss = malloc(sizeof(bNode));
  list timetable;
  list prevTimes = findBus(prevHallplats->bussar, busNumber)->times;
  while(times != NULL){
    
  }
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
      addTimeTable(hallplats, nextHallplats, busNumber, slutstationer_);
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
