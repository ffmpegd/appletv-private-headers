/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class WDListDefinition, WDDocument, NSMutableArray;

__attribute__((visibility("hidden")))
@interface WDListDefinitionTable : NSObject {
@private
	NSMutableArray *mListDefinitions;	// 4 = 0x4
	CFDictionaryRef mListDefinitionMap;	// 8 = 0x8
	unsigned mNextIdIndex;	// 12 = 0xc
	WDDocument *mDocument;	// 16 = 0x10
	WDListDefinition *mLastKnownGoodListDefinition;	// 20 = 0x14
}
- (id)initWithDocument:(id)document;	// 0x35247d85
- (id)addDefinition;	// 0x353b377d
- (id)addDefinition:(int)definition;	// 0x3525fdbd
- (void)dealloc;	// 0x351c87e5
- (id)definitionAt:(int)at;	// 0x353b3759
- (int)definitionCount;	// 0x353b3739
- (id)definitionWithId:(int)anId;	// 0x35260b21
- (id)document;	// 0x3525ff51
- (int)nextId;	// 0x353b37ad
- (void)setLastKnowGoodListDefinition:(id)definition;	// 0x3525ff01
@end

