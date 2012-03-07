/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, WDDocument, WDListDefinition;

__attribute__((visibility("hidden")))
@interface WDList : NSObject {
@private
	NSMutableArray *mLevelOverrides;	// 4 = 0x4
	WDDocument *mDocument;	// 8 = 0x8
	int mIndex;	// 12 = 0xc
	WDListDefinition *mListDefinition;	// 16 = 0x10
}
@property(assign) int index;	// G=0x30e6f685; S=0x30d1cc99; converted property
- (id)initWithDocument:(id)document listDefinition:(id)definition;	// 0x30d1cc05
- (id)addLevelOverride;	// 0x30d369f1
- (void)dealloc;	// 0x30c849ed
- (id)document;	// 0x30d36aad
// converted property getter: - (int)index;	// 0x30e6f685
- (id)levelOverrideAt:(int)at;	// 0x30e6f6b5
- (int)levelOverrideCount;	// 0x30e6f695
- (id)levelOverrides;	// 0x30e6f675
- (id)listDefinition;	// 0x30c830b9
- (int)listId;	// 0x30e6f6d9
// converted property setter: - (void)setIndex:(int)index;	// 0x30d1cc99
@end

