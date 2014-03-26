//
//  PMDTrackHistory+Create.h
//  MilionSongDataset
//
//  Created by Aleksander Grzyb on 26/03/14.
//  Copyright (c) 2014 ISWD. All rights reserved.
//

#import "PMDTrackHistory.h"

@interface PMDTrackHistory (Create)

+ (void)createTrackHistoryWithTrackID:(NSString *)trackID timeStamp:(NSString *)timeStamp userID:(NSString *)userID;

@end
