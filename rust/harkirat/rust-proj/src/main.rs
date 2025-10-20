use std::io;

fn main() {
    println!("Enter a number:");

    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("Failed to read input.");
    
    let number: i32 = input
        .trim()
        .parse()
        .expect("Please enter a valid number.");
    
    println!("\nYou entered the number {}.\n", number);
}
