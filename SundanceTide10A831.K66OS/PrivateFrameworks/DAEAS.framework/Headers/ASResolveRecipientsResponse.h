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
@property(retain) NSNumber *easStatus;	// G=0x36e7b2fd; @synthesize=_easStatus
@property(retain) NSArray *responses;	// G=0x36e7b321; S=0x36e7b335; @synthesize=_responses
+ (BOOL)acceptsTopLevelLeaves;	// 0x36e7ae29
+ (id)asParseRules;	// 0x36e7b039
+ (BOOL)frontingBasicTypes;	// 0x36e7af25
+ (BOOL)notifyOfUnknownTokens;	// 0x36e7af79
+ (BOOL)parsingLeafNode;	// 0x36e7ae7d
+ (BOOL)parsingWithSubItems;	// 0x36e7aed1
- (void)addResponse:(id)response;	// 0x36e7afcd
- (void)dealloc;	// 0x36e7b299
- (id)description;	// 0x36e7b221
// declared property getter: - (id)easStatus;	// 0x36e7b2fd
// declared property getter: - (id)responses;	// 0x36e7b321
- (void)setEASStatus:(id)status;	// 0x36e7b311
// declared property setter: - (void)setResponses:(id)responses;	// 0x36e7b335
@end
