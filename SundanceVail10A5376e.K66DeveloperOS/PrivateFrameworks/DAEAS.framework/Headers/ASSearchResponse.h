/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSArray, NSNumber;

@interface ASSearchResponse : ASItem {
	NSArray *_stores;	// 40 = 0x28
	NSNumber *_status;	// 44 = 0x2c
	int _expectedResultType;	// 48 = 0x30
}
@property(assign) int expectedResultType;	// G=0x322657b9; S=0x322657cd; @synthesize=_expectedResultType
@property(copy) NSNumber *status;	// G=0x32265795; S=0x322657a9; @synthesize=_status
@property(retain) NSArray *stores;	// G=0x32265771; S=0x32265785; @synthesize=_stores
+ (BOOL)acceptsTopLevelLeaves;	// 0x32265299
+ (id)asParseRules;	// 0x32265509
+ (BOOL)frontingBasicTypes;	// 0x32265395
+ (BOOL)notifyOfUnknownTokens;	// 0x322653e9
+ (BOOL)parsingLeafNode;	// 0x322652ed
+ (BOOL)parsingWithSubItems;	// 0x32265341
- (void)dealloc;	// 0x3226543d
- (id)description;	// 0x322654a1
// declared property getter: - (int)expectedResultType;	// 0x322657b9
// declared property setter: - (void)setExpectedResultType:(int)type;	// 0x322657cd
// declared property setter: - (void)setStatus:(id)status;	// 0x322657a9
// declared property setter: - (void)setStores:(id)stores;	// 0x32265785
// declared property getter: - (id)status;	// 0x32265795
// declared property getter: - (id)stores;	// 0x32265771
@end
