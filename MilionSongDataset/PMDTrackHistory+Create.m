//
//  PMDTrackHistory+Create.m
//  MilionSongDataset
//
//  Created by Aleksander Grzyb on 26/03/14.
//  Copyright (c) 2014 ISWD. All rights reserved.
//

#import "PMDUser.h"
#import "PMDTrack.h"
#import "PMDTrackHistory+Create.h"

@implementation PMDTrackHistory (Create)

+ (void)createTrackHistoryWithTrackID:(NSString *)trackID timeStamp:(NSString *)timeStamp userID:(NSString *)userID
{
    if (!trackID || !timeStamp || !userID) {
        NSLog(@"Wrong values to create track history object.");
        return;
    }
    
    PMDUser *user = nil;
    NSArray *users = [PMDUser where:@{
                                     @"idString" : userID
                                     }];
    if (users.count == 0) {
        user = [PMDUser create:@{
                          @"idString": userID
                          }];
    }
    else {
        user = [users firstObject];
    }
    
    PMDTrack *track = nil;
    NSArray *tracks = [PMDTrack where:@{
                                      @"idString" : trackID
                                      }];
    if (tracks.count == 0) {
        track = [PMDTrack create:@{
                                 @"idString": trackID
                                 }];
    }
    else {
        track = [tracks firstObject];
    }
    
    
    NSDate *date = [NSDate dateWithTimeIntervalSince1970:[timeStamp intValue]];
    [PMDTrackHistory findOrCreate:@{@"date" : date,
                                    @"track" : track,
                                    @"user" : user
                                    }];
    
    [[CoreDataManager sharedManager] saveContext];
}

@end
