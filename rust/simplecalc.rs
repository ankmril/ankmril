use std::io;

fn main() {
  let mut choice = String::new();

  let mut num1 = input_value();
  let mut num2 = input_value();

  num1 = number_functions(num1.to_string());
  num2 = number_functions(num2.to_string());

  println!("enter your choice (+/-):");

  io::stdin()
    .read_line(&mut choice)
    .expect("the line couldn't be read.");

  let choice: char = match choice
    .trim()
    .parse() {
      Ok (char) => char,
      Err(_) => {
        println!("choice isn't valid.");
        return;
      }
    };

  match choice {
    '+' => print!("result: {}", num1 + num2),
    '-' => print!("result: {}", num1 - num2),
    _ => { 
      print!("enter choice correctly.");
    }
  }
}

fn input_value() -> i32 {
  let mut value = String::new();

  println!("enter a number");
  io::stdin()
    .read_line(&mut value)
    .expect("the line couldn't be read.");

  match value
    .trim()
    .parse() {
      Ok(num) => num,
      Err(_) => {
        println!("number isn't valid.");
        0
      }
    }
}

fn number_functions(number: String) -> i32 {
  let number: i32 = match number
    .trim()
    .parse() {
      Ok(num) => num,
      Err(_) => {
        println!("number isn't valid.");
        return 0;
      }
    };
    number
}