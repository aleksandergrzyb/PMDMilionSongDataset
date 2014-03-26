//
//  PMDTrackHistory.h
//  MilionSongDataset
//
//  Created by Aleksander Grzyb on 26/03/14.
//  Copyright (c) 2014 ISWD. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class PMDTrack, PMDUser;

@interface PMDTrackHistory : NSManagedObject

@property (nonatomic, retain) NSDate * date;
@property (nonatomic, retain) PMDUser *user;
@property (nonatomic, retain) PMDTrack *track;

@end
