
"use strict";

let ServoRead = require('./ServoRead.js')
let ServoWrite = require('./ServoWrite.js')
let AnalogRead = require('./AnalogRead.js')
let AnalogWrite = require('./AnalogWrite.js')
let DigitalSetDirection = require('./DigitalSetDirection.js')
let DigitalWrite = require('./DigitalWrite.js')
let DigitalRead = require('./DigitalRead.js')

module.exports = {
  ServoRead: ServoRead,
  ServoWrite: ServoWrite,
  AnalogRead: AnalogRead,
  AnalogWrite: AnalogWrite,
  DigitalSetDirection: DigitalSetDirection,
  DigitalWrite: DigitalWrite,
  DigitalRead: DigitalRead,
};
