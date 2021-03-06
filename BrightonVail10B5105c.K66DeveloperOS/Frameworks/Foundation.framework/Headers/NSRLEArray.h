/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "Foundation-Structs.h"
#import "NSMutableCopying.h"


@interface NSRLEArray : NSObject <NSCopying, NSMutableCopying> {
	NSRefCountedRunArray *theList;	// 4 = 0x4
}
- (id)init;	// 0x36073db1
- (id)initWithRefCountedRunArray:(NSRefCountedRunArray *)refCountedRunArray;	// 0x36073dc5
- (void)_makeNewListFrom:(NSRefCountedRunArray *)from;	// 0x36073e31
- (id)copyWithZone:(NSZone *)zone;	// 0x36090c21
- (unsigned)count;	// 0x3615e74d
- (void)dealloc;	// 0x360738c1
- (id)description;	// 0x3615e761
- (void)finalize;	// 0x3615e6f9
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3608f4a9
- (id)objectAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x36072d55
- (id)objectAtIndex:(unsigned)index effectiveRange:(NSRange *)range runIndex:(unsigned *)index3;	// 0x36096b45
- (id)objectAtRunIndex:(unsigned)runIndex length:(unsigned *)length;	// 0x36096bed
@end

