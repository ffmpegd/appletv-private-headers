/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSArray, NSURL, SAMPCollection;

@interface SAMPSetQueue : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSArray *filters;	// G=0x3422ec45; S=0x3422ecc1; 
@property(retain, nonatomic) SAMPCollection *mediaItems;	// G=0x3422ed29; S=0x3422ed7d; 
@property(copy, nonatomic) NSArray *sort;	// G=0x3422edb9; S=0x3422ee35; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x3422eb69; S=0x3422ebe5; 
+ (id)setQueue;	// 0x3422ead9
+ (id)setQueueWithDictionary:(id)dictionary context:(id)context;	// 0x3422eb1d
- (id)encodedClassName;	// 0x3422eacd
// declared property getter: - (id)filters;	// 0x3422ec45
- (id)groupIdentifier;	// 0x3422eabd
// declared property getter: - (id)mediaItems;	// 0x3422ed29
- (BOOL)requiresResponse;	// 0x3422ee9d
// declared property setter: - (void)setFilters:(id)filters;	// 0x3422ecc1
// declared property setter: - (void)setMediaItems:(id)items;	// 0x3422ed7d
// declared property setter: - (void)setSort:(id)sort;	// 0x3422ee35
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x3422ebe5
// declared property getter: - (id)sort;	// 0x3422edb9
// declared property getter: - (id)targetAppId;	// 0x3422eb69
@end

