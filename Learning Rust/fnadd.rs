use std::io;

fn add(a:i32, b:i32) -> i32 {
    a+b
}
fn main() {
    let mut a=i32::new();
    let mut b=i32::new();

    io::stdin()
    .read_line(&mut input)
    .expect("Failed to read line");

    println!("Enter two numbers",a,b);
}