/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSArray;

__attribute__((visibility("hidden")))
@interface SBJsonBase : NSObject {
@private
	NSMutableArray *errorTrace;	// 4 = 0x4
	unsigned depth;	// 8 = 0x8
	unsigned maxDepth;	// 12 = 0xc
}
@property(readonly, copy) NSArray *errorTrace;	// G=0x33747d0c; @synthesize
@property(assign) unsigned maxDepth;	// G=0x33747a14; S=0x33747a28; @synthesize
- (id)init;	// 0x33747cb0
- (void)addErrorWithCode:(unsigned)code description:(id)description;	// 0x33747ab4
- (void)clearErrorTrace;	// 0x33747a3c
- (void)dealloc;	// 0x33747c50
// declared property getter: - (id)errorTrace;	// 0x33747d0c
// declared property getter: - (unsigned)maxDepth;	// 0x33747a14
// declared property setter: - (void)setMaxDepth:(unsigned)depth;	// 0x33747a28
@end

