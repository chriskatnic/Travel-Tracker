//
//  DataViewController.h
//  Travel Tracker
//
//  Created by Christopher Katnic on 11/3/14.
//  Copyright (c) 2014 Christopher Katnic. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DataViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *dataLabel;
@property (strong, nonatomic) id dataObject;

@end

