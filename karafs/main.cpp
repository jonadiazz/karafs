//
//  main.cpp
//  simple_cpp
//
//  Created by Rurouni on 4/19/15.
//  Copyright (c) 2015 Rurouni. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    //cout << "Karafses\n";

    int A, B, n;
    cin >> A >> B >> n;

    vector<int> s;
    int l, t, m;

    string puts;
    //char puts[ 1000 ];
    while( n-- > 0 )    {
        cin >> l >> t >> m;
        s.resize( n + l );
        
        int passes = 0, c = -1;
        
        if( m % 2 == 1 )    {
            m++;
        }
        
        while( passes < m ) {
            s[ l+passes ] = B* ( l + passes - 1 ) + A - t;
            if( s[ l+passes ] < 1 && ( l+passes ) < t ) {
                c = l + passes;
            }
            passes++;
        }

        
        string cat = to_string( c )+"\n";
        puts.append( cat );
    }
    
    cout << puts;
    return 0;
}

