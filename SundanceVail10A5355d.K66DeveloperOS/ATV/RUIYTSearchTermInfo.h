/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCoding.h"

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface RUIYTSearchTermInfo : XXUnknownSuperclass <NSCoding> {
	NSString *_searchTerm;	// 4 = 0x4
	NSDate *_timestamp;	// 8 = 0x8
}
@property(retain, nonatomic) NSString *searchTerm;	// G=0x259ce1; S=0x259cf1; @synthesize=_searchTerm
@property(retain, nonatomic) NSDate *timestamp;	// G=0x259d19; S=0x259d29; @synthesize=_timestamp
- (id)initWithCoder:(id)coder;	// 0x259c11
- (void).cxx_destruct;	// 0x259d51
- (void)encodeWithCoder:(id)coder;	// 0x259cd5
- (unsigned)hash;	// 0x259cdd
- (BOOL)isEqual:(id)equal;	// 0x259cd9
// declared property getter: - (id)searchTerm;	// 0x259ce1
// declared property setter: - (void)setSearchTerm:(id)term;	// 0x259cf1
// declared property setter: - (void)setTimestamp:(id)timestamp;	// 0x259d29
// declared property getter: - (id)timestamp;	// 0x259d19
@end
