use std::io;

fn main() {
  // program to reverse a string using ".chars().rev().collect::<String>();"

  let mut input = String::new();

  println!("enter the string to be reversed:");

  io::stdin().read_line(&mut input).expect("could not read line.");

  let input: String = match input.trim().parse() {
    Ok(string) => string,
    Err(_) => {
      println!("please enter a valid string.");
      return;
    }
  };

  let reversed_input: String = input.chars().rev().collect::<String>();

  println!("reversed string: {}", reversed_input);
}