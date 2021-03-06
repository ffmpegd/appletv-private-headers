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
@property(retain) NSArray *folders;	// G=0x36c610e5; S=0x36c610f9; @synthesize=_folders
@property(retain) NSNumber *heartBeatInterval;	// G=0x36c61109; S=0x36c6111d; @synthesize=_heartBeatInterval
@property(retain) NSNumber *maxFolders;	// G=0x36c6112d; S=0x36c61141; @synthesize=_maxFolders
@property(retain) NSNumber *status;	// G=0x36c61151; S=0x36c61165; @synthesize=_status
+ (BOOL)acceptsTopLevelLeaves;	// 0x36c60ad1
+ (id)asParseRules;	// 0x36c60c75
+ (BOOL)frontingBasicTypes;	// 0x36c60bcd
+ (BOOL)notifyOfUnknownTokens;	// 0x36c60c21
+ (BOOL)parsingLeafNode;	// 0x36c60b25
+ (BOOL)parsingWithSubItems;	// 0x36c60b79
- (void)dealloc;	// 0x36c60fc1
- (id)description;	// 0x36c6104d
// declared property getter: - (id)folders;	// 0x36c610e5
// declared property getter: - (id)heartBeatInterval;	// 0x36c61109
// declared property getter: - (id)maxFolders;	// 0x36c6112d
// declared property setter: - (void)setFolders:(id)folders;	// 0x36c610f9
// declared property setter: - (void)setHeartBeatInterval:(id)interval;	// 0x36c6111d
// declared property setter: - (void)setMaxFolders:(id)folders;	// 0x36c61141
// declared property setter: - (void)setStatus:(id)status;	// 0x36c61165
// declared property getter: - (id)status;	// 0x36c61151
@end

