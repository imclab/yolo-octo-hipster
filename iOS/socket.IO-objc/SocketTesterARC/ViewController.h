//
//  ViewController.h
//  SocketTesterARC
//
//  Created by Kyeck Philipp on 01.06.12.
//  Copyright (c) 2012 beta_interactive. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SocketIO.h"
#import <CoreMotion/CoreMotion.h>

@interface ViewController : UIViewController <SocketIODelegate>
{
    SocketIO *socketIO;
}

@property (strong, nonatomic) CMMotionManager *motionManager;

@end