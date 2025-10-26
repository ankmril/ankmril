use std::io;

fn main() {
  let mut num = String::new();

  println!("enter a number:");

  io::stdin()
    .read_line(&mut num)
    .expect("the line could not be read.");

  let num: i32 = match num
    .trim()
    .parse() {
      Ok(num) => num,
      Err(_) => {
        println!("the number isn't valid.");
        return;
      }
    };

  if check_var(num) {
    print!("the number is even.");
  }
  else {
    print!("the number is odd.");
  }
}

fn check_var(a: i32) -> bool {
  if a % 2 == 0 {
    true
  }
  else {
    false
  }
}