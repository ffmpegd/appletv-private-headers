/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSDate;

__attribute__((visibility("hidden")))
@interface RUIYTSearchTermInfo : XXUnknownSuperclass <NSCoding> {
	NSString *_searchTerm;	// 4 = 0x4
	NSDate *_timestamp;	// 8 = 0x8
}
@property(retain, nonatomic) NSString *searchTerm;	// G=0x2af17d; S=0x2af18d; @synthesize=_searchTerm
@property(retain, nonatomic) NSDate *timestamp;	// G=0x2af1b5; S=0x2af1c5; @synthesize=_timestamp
- (id)initWithCoder:(id)coder;	// 0x2af0b5
- (void).cxx_destruct;	// 0x2af1ed
- (void)encodeWithCoder:(id)coder;	// 0x2af171
- (unsigned)hash;	// 0x2af179
- (BOOL)isEqual:(id)equal;	// 0x2af175
// declared property getter: - (id)searchTerm;	// 0x2af17d
// declared property setter: - (void)setSearchTerm:(id)term;	// 0x2af18d
// declared property setter: - (void)setTimestamp:(id)timestamp;	// 0x2af1c5
// declared property getter: - (id)timestamp;	// 0x2af1b5
@end

