/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASParsingAcceptingTopLevelLeaves.h"
#import "ASParsingWithSubItems.h"
#import "ASItem.h"
#import "ASParsingFrontingBasicType.h"

@class NSDictionary, NSMutableDictionary;

@interface ASDictionary : ASItem <ASParsingWithSubItems, ASParsingFrontingBasicType, ASParsingAcceptingTopLevelLeaves> {
	NSMutableDictionary *_items;	// 40 = 0x28
	NSDictionary *_subclassRuleSet;	// 44 = 0x2c
	NSMutableDictionary *_placeHolder;	// 48 = 0x30
}
+ (BOOL)acceptsTopLevelLeaves;	// 0x33a06539
+ (BOOL)frontingBasicTypes;	// 0x33a06635
+ (BOOL)notifyOfUnknownTokens;	// 0x33a06689
+ (BOOL)parsingLeafNode;	// 0x33a0658d
+ (BOOL)parsingWithSubItems;	// 0x33a065e1
- (id)initWithSubclassRuleSet:(id)subclassRuleSet;	// 0x33a066dd
- (void)_setItems:(id)items;	// 0x33a06849
- (void)applyPlaceHolder;	// 0x33a0688d
- (id)asParseRules;	// 0x33a06839
- (void)clearPlaceHolder;	// 0x33a068ad
- (id)commonValue;	// 0x33a06901
- (void)dealloc;	// 0x33a06765
- (id)description;	// 0x33a067dd
- (void)setObject:(id)object forDCCPT:(int)dccpt;	// 0x33a068d9
@end

