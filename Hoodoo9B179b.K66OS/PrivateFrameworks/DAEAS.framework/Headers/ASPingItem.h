/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSArray, NSNumber;

@interface ASPingItem : ASItem {
	NSArray *_folders;	// 40 = 0x28
	NSNumber *_heartBeatInterval;	// 44 = 0x2c
	NSNumber *_maxFolders;	// 48 = 0x30
	NSNumber *_status;	// 52 = 0x34
}
@property(retain) NSArray *folders;	// G=0x31dfe6bd; S=0x31dfe6d1; @synthesize=_folders
@property(retain) NSNumber *heartBeatInterval;	// G=0x31dfe6f5; S=0x31dfe709; @synthesize=_heartBeatInterval
@property(retain) NSNumber *maxFolders;	// G=0x31dfe72d; S=0x31dfe741; @synthesize=_maxFolders
@property(retain) NSNumber *status;	// G=0x31dfe765; S=0x31dfe779; @synthesize=_status
+ (BOOL)acceptsTopLevelLeaves;	// 0x31dfe0e9
+ (BOOL)frontingBasicTypes;	// 0x31dfe1e5
+ (BOOL)notifyOfUnknownTokens;	// 0x31dfe239
+ (BOOL)parsingLeafNode;	// 0x31dfe13d
+ (BOOL)parsingWithSubItems;	// 0x31dfe191
- (id)asParseRules;	// 0x31dfe28d
- (void)dealloc;	// 0x31dfe5a1
- (id)description;	// 0x31dfe629
// declared property getter: - (id)folders;	// 0x31dfe6bd
// declared property getter: - (id)heartBeatInterval;	// 0x31dfe6f5
// declared property getter: - (id)maxFolders;	// 0x31dfe72d
// declared property setter: - (void)setFolders:(id)folders;	// 0x31dfe6d1
// declared property setter: - (void)setHeartBeatInterval:(id)interval;	// 0x31dfe709
// declared property setter: - (void)setMaxFolders:(id)folders;	// 0x31dfe741
// declared property setter: - (void)setStatus:(id)status;	// 0x31dfe779
// declared property getter: - (id)status;	// 0x31dfe765
@end

