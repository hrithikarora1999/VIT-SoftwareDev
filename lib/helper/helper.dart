import 'package:flutter/material.dart';

class TextFieldForm extends StatelessWidget {
  final text;
  final date;
  final textcontrol;
  TextFieldForm({this.text, this.date, this.textcontrol});
  @override
  Widget build(BuildContext context) {
    return Padding(
      padding: const EdgeInsets.all(15.0),
      child: TextFormField(
        controller: textcontrol,
        onTap: date,
        decoration: new InputDecoration(
          labelText: text,
          fillColor: Colors.white,
          border: new OutlineInputBorder(
            borderRadius: new BorderRadius.circular(30.0),
            borderSide: new BorderSide(),
          ),
          //fillColor: Colors.green
        ),
        validator: (val) {
          if (val.length == 0) {
            return "Field  cannot be empty";
          } else {
            return null;
          }
        },
        style: new TextStyle(
          fontFamily: "Montserrat",
        ),
      ),
    );
  }
}

class AuthButton extends StatelessWidget {
  final text;
  final function;
  Color color;
  Color textcolor;
  AuthButton({
    this.text,
    this.function,
    this.color,
    this.textcolor = Colors.white,
  });
  @override
  Widget build(BuildContext context) {
    return Padding(
      padding: const EdgeInsets.all(10.0),
      child: Center(
        child: FlatButton(
          onPressed: function,
          child: Container(
            width: 160,
            height: 60,
            child: Center(
                child: Text(
              text,
              style: TextStyle(
                  fontFamily: 'Montserrat', fontSize: 20, color: Colors.white),
            )),
            decoration: BoxDecoration(
              border: Border.all(color: Colors.blue, width: 1.0),
              borderRadius: BorderRadius.circular(20),
              color: Colors.blue,
            ),
          ),
        ),
      ),
    );
  }
}

List<DropdownMenuItem> commandlist = [
  DropdownMenuItem(
    value: 'Defend',
    child: Text(
      'Defend',
      style: TextStyle(
          fontSize: 16, fontWeight: FontWeight.bold, fontFamily: "Montserrat"),
    ),
  ),
  DropdownMenuItem(
    value: 'Run',
    child: Text(
      'Run',
      style: TextStyle(
          fontSize: 16, fontWeight: FontWeight.bold, fontFamily: "Montserrat"),
    ),
  ),
  DropdownMenuItem(
    value: 'Run Fast',
    child: Text(
      'Run Fast',
      style: TextStyle(
          fontSize: 16, fontWeight: FontWeight.bold, fontFamily: "Montserrat"),
    ),
  ),
  DropdownMenuItem(
    value: 'Cover Drive',
    child: Text(
      'Cover Drive',
      style: TextStyle(
          fontSize: 16, fontWeight: FontWeight.bold, fontFamily: "Montserrat"),
    ),
  ),
  DropdownMenuItem(
    value: 'On Drive',
    child: Text(
      'On Drive',
      style: TextStyle(
          fontSize: 16, fontWeight: FontWeight.bold, fontFamily: "Montserrat"),
    ),
  ),
  DropdownMenuItem(
    value: 'Straight Drive',
    child: Text(
      'Straight Drive',
      style: TextStyle(
          fontSize: 16, fontWeight: FontWeight.bold, fontFamily: "Montserrat"),
    ),
  ),
  DropdownMenuItem(
    value: 'SquareCut',
    child: Text(
      'Square Cut',
      style: TextStyle(
          fontSize: 16, fontWeight: FontWeight.bold, fontFamily: "Montserrat"),
    ),
  ),
  DropdownMenuItem(
    value: 'Pull',
    child: Text(
      'Pull',
      style: TextStyle(
          fontSize: 16, fontWeight: FontWeight.bold, fontFamily: "Montserrat"),
    ),
  ),
  DropdownMenuItem(
    value: 'Hook',
    child: Text(
      'Hook',
      style: TextStyle(
          fontSize: 16, fontWeight: FontWeight.bold, fontFamily: "Montserrat"),
    ),
  ),
  DropdownMenuItem(
    value: 'Helicopter',
    child: Text(
      'Helicopter',
      style: TextStyle(
          fontSize: 16, fontWeight: FontWeight.bold, fontFamily: "Montserrat"),
    ),
  ),
];
