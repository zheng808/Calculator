//
//  ViewController.h
//  Calculator
//
//  Created by lizheng on 2014-04-28.
//  Copyright (c) 2014 lizheng. All rights reserved.
//

#import <UIKit/UIKit.h>

int Method;
int SelectNumber;
float RunningTotal;


@interface ViewController : UIViewController
{
    IBOutlet UILabel *Screen;
    
}

-(IBAction)Number1:(id)sender;
-(IBAction)Number2:(id)sender;
-(IBAction)Number3:(id)sender;
-(IBAction)Number4:(id)sender;
-(IBAction)Number5:(id)sender;
-(IBAction)Number6:(id)sender;
-(IBAction)Number7:(id)sender;
-(IBAction)Number8:(id)sender;
-(IBAction)Number9:(id)sender;
-(IBAction)Number0:(id)sender;
-(IBAction)Times:(id)sender;
-(IBAction)Divide:(id)sender;
-(IBAction)Substract:(id)sender;
-(IBAction)Plus:(id)sender;
-(IBAction)equal:(id)sender;
-(IBAction)AllClear:(id)sender;

@end
