# fast-inverse-sqrt-node-gyp

This package provides a C++ implementation of the fast inverse square root algorithm for Node.js.

It's implemented in C++ and runs through node's API, thanks to Node-Gyp feature of Node. This approach provides near-native performance and can be used for high-demand computing tasks, when native hardware instructions aren't available through any graphics library.

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
fast-inverse-sqrt-node-gyp 7
```

or 

```
npx fast-inverse-sqrt-node-gyp 7
```

## 2. Using as a Module

**This is a way to use this package as a module on a project.**

Navigate to a npm project's folder and install by : 

```
npm i fast-inverse-sqrt-node-gyp
```

Then you can use as shown bellow :

```
const fisqrt = require('fast-inverse-sqrt-node-gyp');

let res = fisqrt.fisqrt(7);

console.log(res);
```