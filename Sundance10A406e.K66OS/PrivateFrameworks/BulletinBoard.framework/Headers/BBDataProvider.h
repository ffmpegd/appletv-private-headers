/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import "BBSectionIdentity.h"


@protocol BBDataProvider <BBSectionIdentity>
@optional
- (float)attachmentAspectRatioForRecordID:(id)recordID;
- (id)attachmentPNGDataForRecordID:(id)recordID sizeConstraints:(id)constraints;
@required
- (id)bulletinsFilteredBy:(unsigned)by count:(unsigned)count lastCleared:(id)cleared;
@optional
- (id)bulletinsFilteredBy:(unsigned)by enabledSectionIDs:(id)ids count:(unsigned)count lastCleared:(id)cleared;
- (id)clearedInfoForBulletins:(id)bulletins;
- (id)clearedInfoForBulletins:(id)bulletins lastClearedInfo:(id)info;
- (void)dataProviderDidLoad;
- (id)defaultSubsectionInfos;
- (id)displayNameForSubsectionID:(id)subsectionID;
- (BOOL)migrateSectionInfo:(id)info oldSectionInfo:(id)info2;
- (id)sectionParameters;
@required
- (id)sortDescriptors;
@end
