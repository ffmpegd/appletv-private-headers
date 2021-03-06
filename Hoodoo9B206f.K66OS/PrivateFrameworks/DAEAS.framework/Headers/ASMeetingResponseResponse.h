/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSMutableArray, NSArray;

@interface ASMeetingResponseResponse : ASItem {
	NSMutableArray *_singularResponses;	// 40 = 0x28
}
@property(readonly, assign) NSArray *singularResponses;	// G=0x321a5c15; @synthesize=_singularResponses
+ (BOOL)acceptsTopLevelLeaves;	// 0x321a5859
+ (BOOL)frontingBasicTypes;	// 0x321a5955
+ (BOOL)notifyOfUnknownTokens;	// 0x321a59a9
+ (BOOL)parsingLeafNode;	// 0x321a58ad
+ (BOOL)parsingWithSubItems;	// 0x321a5901
- (id)init;	// 0x321a59fd
- (void)_addSingularResponse:(id)response;	// 0x321a5a61
- (id)asParseRules;	// 0x321a5a81
- (void)dealloc;	// 0x321a5bc9
- (id)description;	// 0x321a5b61
// declared property getter: - (id)singularResponses;	// 0x321a5c15
@end

