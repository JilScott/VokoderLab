//
//  VOKCoreDataUtility.h
//  VokoderLab
//
//  Created by Jilian Scott on 6/4/15.
//  Copyright (c) 2015 Vokal. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface VOKCoreDataUtility : NSObject

/**
 * Sets up the maps to use an in-memory store for testing.
 */
+ (void)setupCoreDataForTesting;

/**
 * Standard setup method.
 */
+ (void)setupCoreData;

/**
 *  Nukes the existing store and sets it back up as a clean store.
 */
+ (void)nukeAndResetCoreData;

/**
 *  Nukes the existing store and sets it back up as a clean store for testing.
 */
+ (void)nukeAndResetCoreDataForTesting;

@end
