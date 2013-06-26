/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASParsingWithSubItems.h"
#import "ASItem.h"
#import "ASParsingFrontingBasicType.h"

@class NSDictionary, NSMutableArray;

@interface ASArray : ASItem <ASParsingWithSubItems, ASParsingFrontingBasicType> {
	NSMutableArray *_items;	// 40 = 0x28
	NSDictionary *_subclassRuleSet;	// 44 = 0x2c
}
+ (BOOL)acceptsTopLevelLeaves;	// 0x339f3389
+ (BOOL)frontingBasicTypes;	// 0x339f3485
+ (BOOL)notifyOfUnknownTokens;	// 0x339f34d9
+ (BOOL)parsingLeafNode;	// 0x339f33dd
+ (BOOL)parsingWithSubItems;	// 0x339f3431
- (id)initWithSubclassRuleSet:(id)subclassRuleSet;	// 0x339f352d
- (void)addItem:(id)item;	// 0x339f3651
- (id)asParseRules;	// 0x339f3641
- (id)commonValue;	// 0x339f36bd
- (void)dealloc;	// 0x339f3581
- (id)description;	// 0x339f35e5
@end
