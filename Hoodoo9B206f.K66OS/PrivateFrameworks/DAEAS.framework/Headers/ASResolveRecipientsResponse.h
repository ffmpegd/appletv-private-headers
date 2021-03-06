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
@property(retain) NSNumber *easStatus;	// G=0x322043b9; @synthesize=_easStatus
@property(retain) NSArray *responses;	// G=0x322043f1; S=0x32204405; @synthesize=_responses
+ (BOOL)acceptsTopLevelLeaves;	// 0x32203f61
+ (BOOL)frontingBasicTypes;	// 0x3220405d
+ (BOOL)notifyOfUnknownTokens;	// 0x322040b1
+ (BOOL)parsingLeafNode;	// 0x32203fb5
+ (BOOL)parsingWithSubItems;	// 0x32204009
- (void)addResponse:(id)response;	// 0x32204105
- (id)asParseRules;	// 0x32204169
- (void)dealloc;	// 0x32204359
- (id)description;	// 0x322042e1
// declared property getter: - (id)easStatus;	// 0x322043b9
// declared property getter: - (id)responses;	// 0x322043f1
- (void)setEASStatus:(id)status;	// 0x322043cd
// declared property setter: - (void)setResponses:(id)responses;	// 0x32204405
@end

