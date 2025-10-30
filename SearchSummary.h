//
// Created by adamf on 29.10.2025.
//

#ifndef SIMPLESEARCH_SEARCHSUMMARY_H
#define SIMPLESEARCH_SEARCHSUMMARY_H



struct SearchSummery{
    long long comparisons;
    double timeSpentsMs;

SearchSummery()
    : comparisons(0),
      timeSpentMs(0.0)
 {}
};


#endif //SIMPLESEARCH_SEARCHSUMMARY_H