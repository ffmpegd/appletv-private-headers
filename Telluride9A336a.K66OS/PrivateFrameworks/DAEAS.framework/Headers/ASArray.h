/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"
#import "ASParsingWithSubItems.h"
#import "ASParsingFrontingBasicType.h"

@class NSDictionary, NSMutableArray;

@interface ASArray : ASItem <ASParsingWithSubItems, ASParsingFrontingBasicType> {
	NSMutableArray *_items;	// 40 = 0x28
	NSDictionary *_subclassRuleSet;	// 44 = 0x2c
}
+ (BOOL)acceptsTopLevelLeaves;	// 0x31560d4d
+ (BOOL)frontingBasicTypes;	// 0x31560e49
+ (BOOL)notifyOfUnknownTokens;	// 0x31560e9d
+ (BOOL)parsingLeafNode;	// 0x31560da1
+ (BOOL)parsingWithSubItems;	// 0x31560df5
- (id)initWithSubclassRuleSet:(id)subclassRuleSet;	// 0x31560ef1
- (void)addItem:(id)item;	// 0x31561011
- (id)asParseRules;	// 0x31561001
- (id)commonValue;	// 0x31561075
- (void)dealloc;	// 0x31560f45
- (id)description;	// 0x31560fa5
@end
