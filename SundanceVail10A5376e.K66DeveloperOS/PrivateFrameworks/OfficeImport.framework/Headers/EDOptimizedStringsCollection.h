/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDCollection.h"

@class NSMutableDictionary;

@interface EDOptimizedStringsCollection : EDCollection {
	NSMutableDictionary *mStringDictionary;	// 8 = 0x8
}
- (id)init;	// 0x370c8e9d
- (unsigned)addObject:(id)object;	// 0x37126e99
- (unsigned)addOrEquivalentObject:(id)object;	// 0x37126f6d
- (void)dealloc;	// 0x370c8fd5
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x37126f7d
@end
