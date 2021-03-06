/*
 * GenreYearQuery.cpp
 *
 *  Created on: Jul 15, 2010
 *      Author: gina
 */

#include "GenreYearQuery.h"

using namespace std;

void GenreYearQuery::query(){
	genreUserQuery=" ";
	yearUserQuery=-1;

	cout<<"Enter movie genre (eg: myster, \" \" for all results)";
	getline(cin,genreUserQuery);

	cout<<"Enter movie year: (eg: 2006, -1 for all results)";
	cin>>yearUserQuery;

	string trash;
	getline(cin, trash);

	//genreUserQuery="myster";
	//yearUserQuery=2006;

	set<int> genreResults;
	db->queryGenre(genreUserQuery,genreResults);

	set<int> yearResults;
	db->queryYear(yearUserQuery, yearResults);

	intersectResults(genreResults, yearResults);
}
GenreYearQuery::GenreYearQuery() {
	//cout<<"Constructing a query for the combo of genre and year."<<endl;
}
GenreYearQuery::~GenreYearQuery() {
}
