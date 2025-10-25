use std::io;

fn main() {
    let mut a = String::new();
    let mut b = String::new();

    println!("enter two numbers:");
    io::stdin()
        .read_line(&mut a)
        .expect("failed to read line");
    io::stdin()
        .read_line(&mut b)
        .expect("failed to read line");
    
    let a: i32 = a
        .trim()
        .parse()
        .expect("not a number");

    let b: i32 = b 
        .trim()
        .parse() 
        .expect("not a number");

    println!("results:");
    println!("addition: {}", add(a, b));
    println!("subtraction: {}", sub(a, b));
    println!("multiplication: {}", mul(a, b));
    if !(b == 0) {
        println!("division: {}", div(a ,b));
    }
    else {
        println!("you cannot divide by zero.");
    }
}

fn add(a: i32, b: i32) -> i32 {
    a + b
}

fn sub(a: i32, b: i32) -> i32 {
    a - b 
}

fn mul(a: i32, b: i32) -> i32 {
    a * b
}

fn div(a: i32, b: i32) -> i32 {
    if b == 0 {
        return 0;
    }
    a / b
}