struct bNode{//buss
  int times;//tider
  node dest;//nästa hållplats
}

struct node{//hållplats
  char *name;
  list bussar;
}

node makeMap(FILE bussar, FILE slutstationer){
  list hallplatser;
  while(!feof(bussar)){
    if(notInlist(hallplats, hallplatser)){
      addToList(hallplats, hallplatser);
    }
    if(nextHallplatsBuss == hallPlatsBuss){
      addTimes(hallplats, nextHallplats, time, previousTime, slutstationer);
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
