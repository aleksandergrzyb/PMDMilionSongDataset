//
//  PMDTrack+Create.h
//  MilionSongDataset
//
//  Created by Aleksander Grzyb on 26/03/14.
//  Copyright (c) 2014 ISWD. All rights reserved.
//

#import "PMDTrack.h"

@interface PMDTrack (Create)

+ (void)createTrackWithID:(NSString *)idString name:(NSString *)name artistName:(NSString *)artistname;

@end
