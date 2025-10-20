use std::io;

fn main() {
    println!("Enter a number below and I will guess which number you typed :)");

    let mut input = String::new();
    io::stdin()
        .read_line(&mut input)
        .expect("Failed to read input.");
    
    let mut number: i32 = input
        .trim()
        .parse()
        .expect("Please enter a valid number.");
    
    number = number + 1;

    println!("\nYou sneaky boy I knew you would type whatever comes before {}. haha :)\n", number);
}
