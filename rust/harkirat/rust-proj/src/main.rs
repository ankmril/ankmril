use std::io;

fn main() {
    println!("Enter a number to be printed with an addition of 5:");

    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("Failed to read input.");
    
    let mut number: i32 = input
        .trim()
        .parse()
        .expect("Please enter a valid number.");

    number = number + 5;
    
    println!("\nYou entered the number {}.\n", number);
}
