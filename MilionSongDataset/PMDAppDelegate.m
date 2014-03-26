//
//  PMDAppDelegate.m
//  MilionSongDataset
//
//  Created by Aleksander Grzyb on 24/03/14.
//  Copyright (c) 2014 ISWD. All rights reserved.
//

#import "PMDAppDelegate.h"

@implementation PMDAppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    return YES;
}

- (void)applicationWillTerminate:(UIApplication *)application
{
    [[CoreDataManager sharedManager] saveContext];
}

@end
