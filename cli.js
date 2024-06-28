#!/usr/bin/env node

/*
 * Command line interface of the package
 */

const fisqrt = require('./build/Release/fisqrt');

/*** * * ***/

let x;

/*** * * ***/

function helpUsage() {
    console.log("Usage: node index.js <number>");
}

function init() {
    /*** * Parameters * ***/

    // Parameters : length check

    if (process.argv.length !== 3) {
        helpUsage();
        process.exit(1);
    }

    // Parameters : "x"

    x = parseFloat(process.argv[2]);

    if (isNaN(x)) {
        helpUsage();
        console.log("Please provide a valid number");
        process.exit(1);
    }
}

/*** * * ***/

function main() {
    let x_fisqrt;

    /*** * * ***/
    
    init();

    x_fisqrt = fisqrt.fisqrt(x);

    /*** * * ***/

    console.log(x_fisqrt)
}

main();