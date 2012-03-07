/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDReferenceCollection, NSMutableArray;

__attribute__((visibility("hidden")))
@interface EDConditionalFormatting : NSObject {
@private
	NSMutableArray *mRules;	// 4 = 0x4
	EDReferenceCollection *mRanges;	// 8 = 0x8
}
+ (id)conditionalFormatting;	// 0x353734f9
- (id)init;	// 0x35231d15
- (void)addRange:(id)range;	// 0x3523205d
- (void)addRule:(id)rule;	// 0x35234cb9
- (void)dealloc;	// 0x35237861
- (void)insertRule:(id)rule atIndex:(unsigned)index;	// 0x353735d5
- (id)rangeAtIndex:(unsigned)index;	// 0x35373541
- (unsigned)rangeCount;	// 0x35373585
- (id)ruleAtIndex:(unsigned)index;	// 0x35373619
- (unsigned)ruleCount;	// 0x3537365d
- (void)sortRulesByPriority;	// 0x353735a5
@end

