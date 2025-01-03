# fast-inverse-sqrt-node-gyp

This package provides a C++ implementation of the fast inverse square root algorithm for Node.js.

## How to use

There are two ways to use this package :

### 1. Global

**This is the way to use the package from a terminal.**

Install by :

```
npm i -g fast-inverse-sqrt-node-gyp
```

Then, to run :

```
fisqrt_ng 7
```

or, in case you face any node-related problems, run through npx :

```
npx fisqrt_ng 7
```

## 2. Using as a Module

**This is a way to use this package as a module on a project.**

Navigate to a npm project's folder and install by : 

```
npm i fast-inverse-sqrt-node-gyp
```

Then you can use as shown bellow :

```
const fisqrt_ng = require('fast-inverse-sqrt-node-gyp');

let res = fisqrt_ng.fisqrt(7);

console.log(res);
```
