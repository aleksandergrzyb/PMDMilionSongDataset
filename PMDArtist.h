//
//  PMDArtist.h
//  MilionSongDataset
//
//  Created by Aleksander Grzyb on 26/03/14.
//  Copyright (c) 2014 ISWD. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class PMDTrack;

@interface PMDArtist : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSSet *tracks;
@end

@interface PMDArtist (CoreDataGeneratedAccessors)

- (void)addTracksObject:(PMDTrack *)value;
- (void)removeTracksObject:(PMDTrack *)value;
- (void)addTracks:(NSSet *)values;
- (void)removeTracks:(NSSet *)values;

@end
