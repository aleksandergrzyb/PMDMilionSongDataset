//
//  PMDTrack+Create.m
//  MilionSongDataset
//
//  Created by Aleksander Grzyb on 26/03/14.
//  Copyright (c) 2014 ISWD. All rights reserved.
//

#import "PMDArtist.h"
#import "PMDTrack+Create.h"

@implementation PMDTrack (Create)

+ (void)createTrackWithID:(NSString *)idString name:(NSString *)name artistName:(NSString *)artistName
{
    if (!idString || !name || !artistName) {
        NSLog(@"Wrong values to create track object.");
        return;
    }
    
    PMDArtist *artist = nil;
    NSArray *artists = [PMDArtist where:@{
                                        @"name" : artistName
                                        }];
    if (artists.count == 0) {
        artist = [PMDArtist create:@{
                                   @"name" : artistName
                                   }];
    }
    else {
        artist = [artists firstObject];
    }
    
    [PMDTrack findOrCreate:@{
                             @"idString": idString,
                             @"name" : name,
                             @"artist" : artist
                             }];
    
    [[CoreDataManager sharedManager] saveContext];
}

@end
