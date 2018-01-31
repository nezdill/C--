//
//  ViewController.swift
//  Animate
//
//  Created by Arnez Dillard on 4/29/17.
//  Copyright © 2017 com.Dillard. All rights reserved.
//

import UIKit

class ViewController: UIViewController {
    var scaleFactor: CGFloat = 2
    var angle: Double = 180
    var boxView: UIView?
    override func viewDidLoad() {
        super.viewDidLoad()
        let frameRect = CGRect(x: 20, y:20, width:45, height:45)
        
        boxView = UIView(frame: frameRect)
        boxView?.backgroundColor = UIColor.blue
        self.view.addSubview(boxView!)
        
        // Do any additional setup after loading the view, typically from a nib.
    }

    override func touchesEnded(_ touches: Set<UITouch>, with event: UIEvent?) {
        if let touch = touches.first{
            let location = touch.location(in: self.view)
            
            UIView.animate(withDuration: 2.0, delay: 0.0, options: UIViewAnimationOptions.curveEaseInOut, animations:{
                let scaleTrans = CGAffineTransform(scaleX: self.scaleFactor,
                                                   y: self.scaleFactor)
                let rotateTrans = CGAffineTransform(rotationAngle: CGFloat(self.angle * M_PI/180))
                self.boxView!.transform = scaleTrans.concatenating(rotateTrans)
                self.angle = (self.angle == 180 ? 360 : 180)
                self.scaleFactor = (self.scaleFactor == 2 ? 1 : 2)
                self.boxView?.center = location
            }, completion: nil)
            
            
            }
    }
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}

