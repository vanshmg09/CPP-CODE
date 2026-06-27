#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
using namespace std;

void printItinerary(unordered_map<string, string> tickets) {
    // Find the starting point
    unordered_set<string> to;

    for (pair<string, string> ticket : tickets) {
        to.insert(ticket.second);
    }

    string start = "";

    for (pair<string, string> ticket : tickets) {
        if (to.find(ticket.first) == to.end()) {
            start = ticket.first;
        }
    }

    // Print the itinerary
    cout << start << " -> ";

    while (tickets.count(start)) {
        cout << tickets[start] << " -> ";
        start = tickets[start];
    }

    cout << "Destination" << endl;
}

int main() {
    unordered_map<string, string> tickets;

    tickets["Chennai"] = "Beng";
    tickets["Mum"] = "Delhi";
    tickets["Goa"] = "Chennai";
    tickets["Delhi"] = "Goa";

    printItinerary(tickets);

    return 0;
}


// ===================================================================

// https://www.geeksforgeeks.org/dsa/find-itinerary-from-a-given-list-of-tickets/

// Find Itinerary from a given list of tickets
// Last Updated : 23 Jul, 2025
// Given a list of tickets, find the itinerary in order using the given list.

// Note: It may be assumed that the input list of tickets is not cyclic and there is one ticket from every city except the final destination.

// Examples:

// Input: "Chennai" -> "Bangalore"
//             "Bombay" -> "Delhi"
//              "Goa"    -> "Chennai"
//              "Delhi"  -> "Goa"
// Output: Bombay->Delhi, Delhi->Goa, Goa->Chennai, Chennai->Bangalore

// Input: "New York" -> "Chicago"
//             "Denver" -> "San Francisco"
//             "Chicago" -> "Denver"
//             "San Francisco" -> "Los Angeles"
// Output: New York -> Chicago, Chicago -> Denver, Denver -> San Francisco, San Francisco -> Los Angeles