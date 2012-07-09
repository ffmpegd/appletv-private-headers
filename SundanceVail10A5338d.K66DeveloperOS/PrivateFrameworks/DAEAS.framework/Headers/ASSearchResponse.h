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
@property(assign) int expectedResultType;	// G=0x36edc429; S=0x36edc43d; @synthesize=_expectedResultType
@property(copy) NSNumber *status;	// G=0x36edc405; S=0x36edc419; @synthesize=_status
@property(retain) NSArray *stores;	// G=0x36edc3e1; S=0x36edc3f5; @synthesize=_stores
+ (BOOL)acceptsTopLevelLeaves;	// 0x36edbf09
+ (id)asParseRules;	// 0x36edc179
+ (BOOL)frontingBasicTypes;	// 0x36edc005
+ (BOOL)notifyOfUnknownTokens;	// 0x36edc059
+ (BOOL)parsingLeafNode;	// 0x36edbf5d
+ (BOOL)parsingWithSubItems;	// 0x36edbfb1
- (void)dealloc;	// 0x36edc0ad
- (id)description;	// 0x36edc111
// declared property getter: - (int)expectedResultType;	// 0x36edc429
// declared property setter: - (void)setExpectedResultType:(int)type;	// 0x36edc43d
// declared property setter: - (void)setStatus:(id)status;	// 0x36edc419
// declared property setter: - (void)setStores:(id)stores;	// 0x36edc3f5
// declared property getter: - (id)status;	// 0x36edc405
// declared property getter: - (id)stores;	// 0x36edc3e1
@end
