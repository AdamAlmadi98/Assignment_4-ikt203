#pragma once

struct SearchSummary {
    int    foundIndex = -1;   // -1 hvis ikke funnet
    int    steps      = 0;    // teller iterasjoner
    int    comparisons = 0;   // valgfritt, brukes om du vil logge sammenligninger
    double timeSpentMs = 0.0; // tidsbruk i millisekunder
};
