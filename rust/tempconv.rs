// to input either celsius or fahrenheit based on the user's wish and perform conversions

use std::io;

fn main() {
    let mut choice = String::new(); // trim and parse here itself so mut
    let temp = String::new(); // not mut cause doesn't update here but instead in helper function

    println!("enter 1 for celsius to fahrenheit and 2 for fahrenheit to celsius:");

    io::stdin()
      .read_line(&mut choice)
      .expect("could not read line.");

    let choice: i8 = match choice // used match for error handling
      .trim()
      .parse() {
        // syntax for match
        Ok(num) => num,
        Err(_) => {
            println!("please enter a valid number.");
            return;
        }
    };
    
    if choice == 1 {
        println!("enter temp in celsius:");

        let temp_value = read_temp(temp); // helper function called for input

        println!("result of conversion: {}", cl(temp_value)); // helper function called for conversion
    }
    else if choice == 2 {
        println!("enter temp in fahrenheit:");
   
        let temp_value = read_temp(temp);

        println!("result of conversion: {}", fr(temp_value));
    }
    else {
        println!("enter the choice correctly.");
    }
}

fn cl(t: f32) -> f32 {

    (t * 1.8) + 32.0

}

fn fr(t: f32) -> f32 {

    (t - 32.0) * (5.0 / 9.0)

}

fn read_temp(mut prompt: String) -> f32 { // String prompt and f32 return

    io::stdin()
      .read_line(&mut prompt)
      .expect("could not read line.");

    let prompt: f32 = match prompt
      .trim()
      .parse() {
        Ok(num) => num,
        Err(_) => {
            println!("please enter a valid number.");
            return 0.0;
        }
    };

    prompt // return
}