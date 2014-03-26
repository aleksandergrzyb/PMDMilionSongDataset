//
//  PMDTrack.h
//  MilionSongDataset
//
//  Created by Aleksander Grzyb on 26/03/14.
//  Copyright (c) 2014 ISWD. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class PMDArtist, PMDTrackHistory;

@interface PMDTrack : NSManagedObject

@property (nonatomic, retain) NSString * idString;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) PMDArtist *artist;
@property (nonatomic, retain) NSSet *trackHistories;
@end

@interface PMDTrack (CoreDataGeneratedAccessors)

- (void)addTrackHistoriesObject:(PMDTrackHistory *)value;
- (void)removeTrackHistoriesObject:(PMDTrackHistory *)value;
- (void)addTrackHistories:(NSSet *)values;
- (void)removeTrackHistories:(NSSet *)values;

@end
