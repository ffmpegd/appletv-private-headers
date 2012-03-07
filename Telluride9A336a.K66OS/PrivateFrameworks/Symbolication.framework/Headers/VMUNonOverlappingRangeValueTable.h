/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library
#import "Symbolication-Structs.h"

@class VMURangeArray, NSMutableArray;

@interface VMUNonOverlappingRangeValueTable : NSObject {
	VMURangeArray *_ranges;	// 4 = 0x4
	NSMutableArray *_values;	// 8 = 0x8
}
- (id)init;	// 0x3013ee79
- (unsigned)_indexForLocation:(unsigned long long)location;	// 0x3013dbf5
- (NSRange)_indexNSRangeForOverlappingRangesForVMURange:(VMURange)vmurange;	// 0x3013f30d
- (NSRange)_indexNSRangeInCandidateNSRange:(NSRange)candidateNSRange forVMURange:(VMURange)vmurange;	// 0x3013f361
- (void)setValue:(id)value forNonOverlappingRange:(VMURange)nonOverlappingRange;	// 0x3013f19d
- (void)setValue:(id)value forRange:(VMURange)range;	// 0x3013ef15
- (id)valueForLocation:(unsigned long long)location;	// 0x3013f4c1
@end

