use std::io;

// This is just an example program which has been converted from C to Rust which I've done using ChatGPT just to get a beginner's idea of how the language looks like.
// I had written the code for the C program myself where I used a function named result() to deal with the program's calculations.

fn result(chr: char, a: f64, b: f64) -> f64 {
    if chr == '/' && b == 0.0 {
        println!("Error: Division by zero not allowed.");
        return 0.0;
    }
    match chr {
        '+' => a + b,
        '-' => a - b,
        '*' => a * b,
        '/' => a / b,
        _ => {
            println!("Invalid operator.");
            0.0
        }
    }
}

fn main() {
    loop {
        println!("Enter both numbers:");

        let mut input1 = String::new();
        io::stdin().read_line(&mut input1).unwrap();
        let a: f64 = match input1.trim().parse() {
            Ok(num) => num,
            Err(_) => {
                println!("Invalid number, try again.");
                continue;
            }
        };

        let mut input2 = String::new();
        io::stdin().read_line(&mut input2).unwrap();
        let b: f64 = match input2.trim().parse() {
            Ok(num) => num,
            Err(_) => {
                println!("Invalid number, try again.");
                continue;
            }
        };

        println!("Enter the operation (+, -, *, /):");
        let mut op = String::new();
        io::stdin().read_line(&mut op).unwrap();
        let chr = match op.trim().chars().next() {
            Some(c) => c,
            None => {
                println!("No operation entered, try again.");
                continue;
            }
        };

        println!("Result: {}", result(chr, a, b));

        println!("Do you want to make another operation? (Enter 1 for yes and 2 for no):");
        let mut cont = String::new();
        io::stdin().read_line(&mut cont).unwrap();
        let c: i32 = match cont.trim().parse() {
            Ok(num) => num,
            Err(_) => {
                println!("Invalid input, continuing...");
                continue;
            }
        };

        if c == 2 {
            println!("Thanks for using the calculator.");
            break;
        }
    }
}