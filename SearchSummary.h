<<<<<<< HEAD
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
=======
#ifndef SEARCH_SUMMARY_H
#define SEARCH_SUMMARY_H

struct SearchSummary {
    int comparisons = 0;
    int steps = 0;
    int foundIndex = -1;
    double timeSpentMs = 0.0;

    bool found() const { return foundIndex >= 0; }
};

#endif
>>>>>>> 23d6da3 (Initial commit of SimpleSearch project)
