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
- (id)init;	// 0x34cb662d
- (unsigned)_indexForLocation:(unsigned long long)location;	// 0x34cb66b9
- (NSRange)_indexNSRangeForOverlappingRangesForVMURange:(VMURange)vmurange;	// 0x34cb6949
- (NSRange)_indexNSRangeInCandidateNSRange:(NSRange)candidateNSRange forVMURange:(VMURange)vmurange;	// 0x34cb67b1
- (void)setValue:(id)value forNonOverlappingRange:(VMURange)nonOverlappingRange;	// 0x34cb69b1
- (void)setValue:(id)value forRange:(VMURange)range;	// 0x34cb6b05
- (id)valueForLocation:(unsigned long long)location;	// 0x34cb6769
@end
