//
//  ModelController.h
//  Travel Tracker
//
//  Created by Christopher Katnic on 11/3/14.
//  Copyright (c) 2014 Christopher Katnic. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end

