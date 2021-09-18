/*
 * utils.cpp
 *
 *  Created on: Sep 18, 2021
 *      Author: michael
 */
#include "../includes/utils.h"

//sorts vector inplace based on mySortOrder (inplace means the vector is modified)
//returns nothing
void sort(const SORT_ORDER &mySortOrder,std::vector<process> &myProcesses){

}

//gets the next process from the vector, then removes it from the vector
//returns removed process
process getNext(std::vector<process> &myProcesses){
	process p;
	return p;
}

//returns the number of entries in the vector
int getSize(std::vector<process> &myProcesses){
	return UNIMPLEMENTED;
}

//attempt to correct missing data
//if cannot correct, then drop row
//return number of rows in myProcesses
int handleMissingData(std::vector<process> &myProcesses){
	return NO_DATA_TO_WORK_ON;
}


