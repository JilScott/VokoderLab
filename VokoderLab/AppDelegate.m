//
//  AppDelegate.m
//  VokoderLab
//
//  Created by Jilian Scott on 6/4/15.
//  Copyright (c) 2015 Vokal. All rights reserved.
//

#import "AppDelegate.h"
#import "VOKCoreDataUtility.h"

@implementation AppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    // Setup the data model
    [VOKCoreDataUtility setupCoreData];
    
    return YES;
}

@end
