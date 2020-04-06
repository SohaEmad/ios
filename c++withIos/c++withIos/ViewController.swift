//
//  ViewController.swift
//  c++withIos
//
//  Created by Soha Ahmed on 06/04/2020.
//  Copyright © 2020 Soha Ahmed. All rights reserved.
//

import UIKit

class ViewController: UIViewController {

    @IBOutlet weak var lab1: UILabel!
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        change(); 
    }
func change()
{
    lab1.text = "The integer from C++ is \(getIntFromCPP())";
    }
}

