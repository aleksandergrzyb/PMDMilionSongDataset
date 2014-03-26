//
//  PMDUser.h
//  MilionSongDataset
//
//  Created by Aleksander Grzyb on 26/03/14.
//  Copyright (c) 2014 ISWD. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class PMDTrackHistory;

@interface PMDUser : NSManagedObject

@property (nonatomic, retain) NSString * idString;
@property (nonatomic, retain) NSSet *tracksHistories;
@end

@interface PMDUser (CoreDataGeneratedAccessors)

- (void)addTracksHistoriesObject:(PMDTrackHistory *)value;
- (void)removeTracksHistoriesObject:(PMDTrackHistory *)value;
- (void)addTracksHistories:(NSSet *)values;
- (void)removeTracksHistories:(NSSet *)values;

@end
