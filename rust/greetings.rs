use std::io; // for inputs

fn main() {
    let mut name: String = String::new(); // initialize input

    println!("enter your name:");
    io::stdin() // "use std::io;"" followed by this to input
        .read_line(&mut name) // syntax for input
        .expect("failed to read line"); // always write this

    let name = name // let name to store trim of mut name
        .trim();

    println!("hii {}, how's your day today?", name);
    println!("you've got a great weekend ahead of you, {}!", name);
}