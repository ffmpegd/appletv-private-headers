/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface EDLinksCollection : NSObject {
@private
	NSMutableArray *mLinks;	// 4 = 0x4
	NSMutableArray *mReferences;	// 8 = 0x8
}
- (id)init;	// 0x34c56c9d
- (unsigned)addLink:(id)link;	// 0x34c62629
- (void)addOrEquivalentExternalAddInName:(id)name linkReferenceIndex:(unsigned *)index nameIndex:(unsigned *)index3;	// 0x34dce3d5
- (unsigned)addOrEquivalentInternalLinkReferenceWithFirstSheetIndex:(unsigned)firstSheetIndex lastSheetIndex:(unsigned)index;	// 0x34dce519
- (unsigned)addOrEquivalentLinkReferenceOfType:(int)type firstSheetIndex:(unsigned)index lastSheetIndex:(unsigned)index3;	// 0x34dce491
- (unsigned)addReference:(id)reference;	// 0x34c62505
- (bool)convertLinkReferenceIndex:(unsigned)index firstSheetIndex:(unsigned *)index2 lastSheetIndex:(unsigned *)index3;	// 0x34cf0625
- (void)dealloc;	// 0x34c8fc15
- (unsigned)indexOfFirstLinkWithType:(int)type;	// 0x34dce5c9
- (unsigned)indexOfReference:(id)reference;	// 0x34dce53d
- (id)linkAtIndex:(unsigned)index;	// 0x34cf04e5
- (unsigned)linkIndexCreateIfNeededWithType:(int)type;	// 0x34dce571
- (unsigned)linksCount;	// 0x34cf0529
- (id)referenceAtIndex:(unsigned)index;	// 0x34cf0471
- (unsigned)referencesCount;	// 0x34cf04b5
@end

