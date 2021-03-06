/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSArray, NSNumber, NSMutableArray;

@interface ASResolveRecipientsResponse : ASItem {
	NSMutableArray *_responses;	// 40 = 0x28
	NSNumber *_easStatus;	// 44 = 0x2c
}
@property(retain) NSNumber *easStatus;	// G=0x33a391fd; @synthesize=_easStatus
@property(retain) NSArray *responses;	// G=0x33a39221; S=0x33a39235; @synthesize=_responses
+ (BOOL)acceptsTopLevelLeaves;	// 0x33a38d29
+ (id)asParseRules;	// 0x33a38f39
+ (BOOL)frontingBasicTypes;	// 0x33a38e25
+ (BOOL)notifyOfUnknownTokens;	// 0x33a38e79
+ (BOOL)parsingLeafNode;	// 0x33a38d7d
+ (BOOL)parsingWithSubItems;	// 0x33a38dd1
- (void)addResponse:(id)response;	// 0x33a38ecd
- (void)dealloc;	// 0x33a39199
- (id)description;	// 0x33a39121
// declared property getter: - (id)easStatus;	// 0x33a391fd
// declared property getter: - (id)responses;	// 0x33a39221
- (void)setEASStatus:(id)status;	// 0x33a39211
// declared property setter: - (void)setResponses:(id)responses;	// 0x33a39235
@end

