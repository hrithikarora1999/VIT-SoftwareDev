import 'dart:math';

import 'package:flutter/material.dart';
import 'package:hitwicket/helper/helper.dart';
import 'package:toast/toast.dart';

class HomeScreen extends StatefulWidget {
  @override
  _HomeScreenState createState() => _HomeScreenState();
}

class _HomeScreenState extends State<HomeScreen> {
  var commandtype;
  var scores = "0";
  var m = 0.0;
  var score = "0.0";
  var show = false;
  var showsubmit = true;
  var visible = false;

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: Column(
        mainAxisAlignment: MainAxisAlignment.spaceEvenly,
        children: [
          Container(
            width: 350,
            height: 200,
            decoration: BoxDecoration(
              shape: BoxShape.circle,
              border: Border.all(color: Colors.blue, width: 1.0),
              color: Colors.blue,
            ),
            child: Center(
                child: Text(
              scores,
              style: TextStyle(
                  fontSize: 40,
                  fontWeight: FontWeight.w600,
                  color: Colors.white),
            )),
          ),
          Padding(
            padding: const EdgeInsets.all(15.0),
            child: Container(
              width: 380,
              height: 60,
              padding: EdgeInsets.all(20.0),
              decoration: BoxDecoration(
                borderRadius: BorderRadius.circular(40),
                border: Border.all(color: Colors.grey, width: 1.0),
                //color: Colors.green,
              ),
              child: DropdownButtonHideUnderline(
                child: DropdownButton(
                    icon: Padding(
                      padding: const EdgeInsets.only(left: 50),
                      child: Icon(
                        Icons.arrow_drop_down,
                        color: Colors.black,
                      ),
                    ),
                    hint: Text(
                      'Choose Shot',
                      style: TextStyle(
                          fontSize: 16,
                          fontWeight: FontWeight.bold,
                          fontFamily: "Montserrat"),
                    ),
                    value: commandtype,
                    items: commandlist,
                    onChanged: (value) {
                      setState(() {
                        commandtype = value;
                      });
                    }),
              ),
            ),
          ),
          Text(
            score,
            style: TextStyle(fontFamily: "Montserrat", fontSize: 30),
          ),
          Visibility(
            visible: showsubmit,
            child: AuthButton(
              text: 'Submit',
              function: () {
                setState(() {
                  m = m + 0.1;
                  score = m.toString();
                  if (m > 0.5) {
                    show = true;
                    showsubmit = false;
                  }
                });
                print(commandtype);
                switch (commandtype) {
                  case "Defend":
                    {
                      Random random = new Random();
                      int min = 2, max = 5;
                      int r = min + random.nextInt(max - min);
                      setState(() {
                        var p = ((5 - r) * 100) / 5;
                        if (p > 40) {
                          setState(() {
                            scores = "0";
                          });
                        } else {
                          setState(() {
                            scores = "0.0";
                          });
                          Toast.show("You Missed it", context,
                              duration: Toast.LENGTH_LONG,
                              gravity: Toast.CENTER);
                        }
                      });
                    }
                    break;
                  case "Run":
                    {
                      Random random = new Random();
                      int min = 2, max = 5;
                      int r = min + random.nextInt(max - min);
                      setState(() {
                        var p = ((7 - r) * 100) / 7;
                        if (p > 40) {
                          setState(() {
                            scores = "1";
                          });
                        } else {
                          setState(() {
                            scores = "0.0";
                          });
                          Toast.show("You Missed it", context,
                              duration: Toast.LENGTH_LONG,
                              gravity: Toast.CENTER);
                        }
                      });
                    }
                    break;
                  case "Run Fast":
                    {
                      Random random = new Random();
                      int min = 2, max = 5;
                      int r = min + random.nextInt(max - min);
                      setState(() {
                        var p = ((6 - r) * 100) / 6;
                        if (p > 40) {
                          setState(() {
                            scores = "2";
                          });
                        } else {
                          setState(() {
                            scores = "0.0";
                          });
                          Toast.show("You Missed it", context,
                              duration: Toast.LENGTH_LONG,
                              gravity: Toast.CENTER);
                        }
                      });
                    }
                    break;
                  case "Cover Drive":
                    {
                      Random random = new Random();
                      int min = 2, max = 5;
                      int r = min + random.nextInt(max - min);
                      setState(() {
                        var p = ((7 - r) * 100) / 7;
                        if (p > 40) {
                          setState(() {
                            scores = "2";
                          });
                        } else {
                          setState(() {
                            scores = "0.0";
                          });
                          Toast.show("You Missed it", context,
                              duration: Toast.LENGTH_LONG,
                              gravity: Toast.CENTER);
                        }
                      });
                    }
                    break;
                  case "On Drive":
                    {
                      Random random = new Random();
                      int min = 2, max = 5;
                      int r = min + random.nextInt(max - min);
                      setState(() {
                        var p = ((5 - r) * 100) / 5;
                        if (p > 40) {
                          setState(() {
                            scores = "2";
                          });
                        } else {
                          setState(() {
                            scores = "0.0";
                          });
                          Toast.show("You Missed it", context,
                              duration: Toast.LENGTH_LONG,
                              gravity: Toast.CENTER);
                        }
                      });
                    }
                    break;
                  case "Straight Drive":
                    {
                      Random random = new Random();
                      int min = 2, max = 5;
                      int r = min + random.nextInt(max - min);
                      setState(() {
                        var p = ((6 - r) * 100) / 6;
                        if (p > 40) {
                          setState(() {
                            scores = "2";
                          });
                        } else {
                          setState(() {
                            scores = "0.0";
                          });
                          Toast.show("You Missed it", context,
                              duration: Toast.LENGTH_LONG,
                              gravity: Toast.CENTER);
                        }
                      });
                    }
                    break;
                  case "Square Cut":
                    {
                      Random random = new Random();
                      int min = 2, max = 5;
                      int r = min + random.nextInt(max - min);
                      setState(() {
                        var p = ((7 - r) * 100) / 7;
                        if (p > 40) {
                          setState(() {
                            scores = "4";
                          });
                        } else {
                          setState(() {
                            scores = "0.0";
                          });
                          Toast.show("You Missed it", context,
                              duration: Toast.LENGTH_LONG,
                              gravity: Toast.CENTER);
                        }
                      });
                    }
                    break;
                  case "Pull":
                    {
                      Random random = new Random();
                      int min = 2, max = 5;
                      int r = min + random.nextInt(max - min);
                      setState(() {
                        var p = ((8 - r) * 100) / 8;
                        if (p > 40) {
                          setState(() {
                            scores = "4";
                          });
                        } else {
                          setState(() {
                            scores = "0.0";
                          });
                          Toast.show("You Missed it", context,
                              duration: Toast.LENGTH_LONG,
                              gravity: Toast.CENTER);
                        }
                      });
                    }
                    break;
                  case "Hook":
                    {
                      Random random = new Random();
                      int min = 2, max = 5;
                      int r = min + random.nextInt(max - min);
                      setState(() {
                        var p = ((7 - r) * 100) / 7;
                        if (p > 40) {
                          setState(() {
                            scores = "6";
                          });
                        } else {
                          setState(() {
                            scores = "0.0";
                          });
                          Toast.show("You Missed it", context,
                              duration: Toast.LENGTH_LONG,
                              gravity: Toast.CENTER);
                        }
                      });
                    }
                    break;
                  case "Helicopter":
                    {
                      Random random = new Random();
                      int min = 2, max = 5;
                      int r = min + random.nextInt(max - min);
                      setState(() {
                        var p = ((8 - r) * 100) / 8;
                        if (p > 40) {
                          setState(() {
                            scores = "6";
                          });
                        } else {
                          setState(() {
                            scores = "0.0";
                          });
                          Toast.show("You Missed it", context,
                              duration: Toast.LENGTH_LONG,
                              gravity: Toast.CENTER);
                        }
                      });
                    }
                    break;
                  default:
                    {
                      print("This is default case");
                    }
                    break;
                }
              },
            ),
          ),
          Visibility(
            visible: show,
            child: AuthButton(
              text: "Play Again",
              function: () {
                setState(() {
                  scores = "0";
                  show = false;
                  showsubmit = true;
                  score = "0.0";
                  m = 0.0;
                });
              },
            ),
          )
        ],
      ),
    );
  }
}
